#include "../Configuration.hpp"

// Main function for Long-Range Random Walk (RW_LR)
void Configuration::RW_LR()
{
    double u, v, w, dx, dy;
    double factor;
    double r0 = 0.5 * sqrt(2.0);  // to reach the NN case as sigma -> infinity
    
    double mk_c, mk_s;
    std::vector<double> d_u_now = {0, 0};
    double d_w_max_now, d_u_max_now;
    double d_w_max, d_u_max;
    
    std::array<int, 2> pos;

    const std::vector<double> thresholds = {
        1.0 / 8.0 * N_max, 2.0 / 8.0 * N_max, 3.0 / 8.0 * N_max, 4.0 / 8.0 * N_max, 
        5.0 / 8.0 * N_max, 6.0 / 8.0 * N_max, 7.0 / 8.0 * N_max, 8.0 / 8.0 * N_max
    };

    const std::vector<int> chi_k_indices = {
        para.i_chi_k_1, para.i_chi_k_2, para.i_chi_k_3, para.i_chi_k_4, para.i_chi_k_5, 
        para.i_chi_k_6, para.i_chi_k_7, para.i_chi_k_8
    };
        
    const std::vector<int> dist_wrap_indices = {
        para.i_dist_wrap_1, para.i_dist_wrap_2, para.i_dist_wrap_3, para.i_dist_wrap_4, para.i_dist_wrap_5, 
        para.i_dist_wrap_6, para.i_dist_wrap_7, para.i_dist_wrap_8
    };
    
    const std::vector<int> dist_unwrap_indices = {
        para.i_dist_unwrap_1, para.i_dist_unwrap_2, para.i_dist_unwrap_3, para.i_dist_unwrap_4, para.i_dist_unwrap_5, 
        para.i_dist_unwrap_6, para.i_dist_unwrap_7, para.i_dist_unwrap_8
    };
    
    const std::vector<int> nsite_indices = {
        para.i_nsite_1, para.i_nsite_2, para.i_nsite_3, para.i_nsite_4, para.i_nsite_5, 
        para.i_nsite_6, para.i_nsite_7, para.i_nsite_8
    };

    // Flags to mark whether each threshold has been recorded
    std::vector<bool> flags(thresholds.size(), false);
    //_______________________________________________________________________________

    // Initialize the walker's head position to 0 and length to 0
    std::fill(string_head.begin(), string_head.end(), xc);
    length_string = 0;
    mk_c = 0; 
    mk_s = 0;
    d_w_max_now = 0.0;
    d_u_max_now = 0.0;
    d_u_max = 0.0;
    d_w_max = 0.0;
    
    N_range = 1;

    visited_2D.clear();
    pos[0] = string_head[0];
    pos[1] = string_head[1];
    // pos[0] = d_u_now[0];
    // pos[1] = d_u_now[1];
    visited_2D.insert(pos);

    // Main loop: perform random walk until reaching the maximum number of steps N_max
    while (true)
    {
        //_________________________________________________________________________
        // Step 1: Propose a new position (LR case)
        //_________________________________________________________________________
        while (true)
        {
            u = rn.getRandomDouble();
            v = rn.getRandomDouble(); 
            u = (u == 0.0) ? 1.0 : u; // Ensure u, v are not zero
            v = (v == 0.0) ? 1.0 : v;
            w = u * u + v * v;
            if(w < 1.0) break;      
        }

        factor = 1.0 / pow(w, 0.5 + 1.0 / Sigma);

        dx = (int)floor(r0 * u * factor + 0.5); // Move in x direction
        dy = (int)floor(r0 * v * factor + 0.5); // Move in y direction

        if(rn.getRandomDouble() < 0.5) dx = -dx; // Randomly flip x direction
        if(rn.getRandomDouble() < 0.5) dy = -dy; // Randomly flip y direction

        string_head[0] += dx;
        string_head[1] += dy;

        // Update the current distance measures
        d_u_now[0] += dx;
        d_u_now[1] += dy;

        d_u_max_now = std::max(d_u_now[0], d_u_now[1]);
        if(d_u_max_now > d_u_max) {
            d_u_max = d_u_max_now;
        }
        
        // for pbc
        string_head[0] = pbc_mod_v2(string_head[0], L);
        string_head[1] = pbc_mod_v2(string_head[1], L);

        d_w_max_now = std::max(string_head[0] - xc, string_head[1] - yc);
        if(d_w_max_now > d_w_max) {
            d_w_max = d_w_max_now;
        }

        // count range 
        pos[0] = string_head[0];
        pos[1] = string_head[1];
        // pos[0] = d_u_now[0];
        // pos[1] = d_u_now[1];
        visited_2D.insert(pos);
        N_range = visited_2D.size();
        // std::cout<<N_range<<std::endl;

        //_________________________________________________________________________
        // Step 2: Increase the walk length
        //_________________________________________________________________________
        length_string++;
        
        // mk_c += k_cos[string_head[0]];
		// mk_s += k_sin[string_head[0]];
        mk_c += cos(2 * M_PI / (double)L * (string_head[0] - xc));
		mk_s += sin(2 * M_PI / (double)L * (string_head[0] - xc));

        //_________________________________________________________________________
        // Step 3: Check if any step-length threshold is reached, record max radius if so
        //_________________________________________________________________________
        for (size_t i = 0; i < thresholds.size(); ++i) {
            if (!flags[i] && length_string >= thresholds[i]) {
                flags[i] = true;                  // Mark as recorded
                obs.Ob[chi_k_indices[i]] = mk_c * mk_c + mk_s * mk_s;     // Record the maximum radius
                obs.Ob[dist_wrap_indices[i]] = d_w_max;
                obs.Ob[dist_unwrap_indices[i]] = d_u_max;       // Record the number of returns to origin
                obs.Ob[nsite_indices[i]] = N_range; // Record the probability of return to origin

                // If the maximum number of steps N_max is reached, exit the walk
                if (N_max == thresholds[i]) {
                    return;
                }
            }
        }
    }    

}