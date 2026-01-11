#include "../Configuration.hpp"

// Main function for Random Walk (RW)
void Configuration::RW()
{
    // Current radius and maximum radius encountered
    double R_now, R_max = 0;
    double Mn = 0;
    bool Pn = false;

    double r = 0; 
    double r2 = 0;

    //_______________________________________________________________________________
    // List of step-length thresholds (record max radius when reaching each threshold)
    const std::vector<long long> thresholds = {
        10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000
    };

    // Indices in obs.Ob corresponding to each threshold (must match obs.Ob)
    const std::vector<int> R_indices = {
        para.i_R_1e1, para.i_R_1e2, para.i_R_1e3, para.i_R_1e4, para.i_R_1e5,
        para.i_R_1e6, para.i_R_1e7, para.i_R_1e8, para.i_R_1e9, para.i_R_1e10
    };

    const std::vector<int> ns_indices = {
        para.i_ns_1e1, para.i_ns_1e2, para.i_ns_1e3, para.i_ns_1e4, para.i_ns_1e5,
        para.i_ns_1e6, para.i_ns_1e7, para.i_ns_1e8, para.i_ns_1e9, para.i_ns_1e10
    };

    const std::vector<int> Mn_indices = {
        para.i_Mn_1e1, para.i_Mn_1e2, para.i_Mn_1e3, para.i_Mn_1e4, para.i_Mn_1e5,
        para.i_Mn_1e6, para.i_Mn_1e7, para.i_Mn_1e8, para.i_Mn_1e9, para.i_Mn_1e10
    };

    const std::vector<int> Pn_indices = {
        para.i_Pn_1e1, para.i_Pn_1e2, para.i_Pn_1e3, para.i_Pn_1e4, para.i_Pn_1e5,
        para.i_Pn_1e6, para.i_Pn_1e7, para.i_Pn_1e8, para.i_Pn_1e9, para.i_Pn_1e10
    };

    const std::vector<int> r_indices = {
        para.i_r_1e1, para.i_r_1e2, para.i_r_1e3, para.i_r_1e4, para.i_r_1e5,
        para.i_r_1e6, para.i_r_1e7, para.i_r_1e8, para.i_r_1e9, para.i_r_1e10
    };

    const std::vector<int> r2_indices = {
        para.i_r2_1e1, para.i_r2_1e2, para.i_r2_1e3, para.i_r2_1e4, para.i_r2_1e5,
        para.i_r2_1e6, para.i_r2_1e7, para.i_r2_1e8, para.i_r2_1e9, para.i_r2_1e10
    };

    // Flags to mark whether each threshold has been recorded
    std::vector<bool> flags(thresholds.size(), false);
    //_______________________________________________________________________________

    // Initialize the walker's head position to 0 and length to 0
    std::fill(string_head.begin(), string_head.end(), 0);
    length_string = 0;
    N_range = 1;
    if (Dim == 1)
    {
        visited_1D.clear();
        visited_1D.insert(string_head[0]);
    }
    else if (Dim == 2)
    {
        visited_2D.clear();
        std::array<int, 2> pos;
        pos[0] = string_head[0];
        pos[1] = string_head[1];
        visited_2D.insert(pos);
    }
    else if (Dim == 3)
    {
        visited_3D.clear();
        std::array<int, 3> pos;
        pos[0] = string_head[0];
        pos[1] = string_head[1];
        pos[2] = string_head[2];
        visited_3D.insert(pos);
    }
    else if (Dim == 4)
    {
        visited_4D.clear();
        std::array<int, 4> pos;
        pos[0] = string_head[0];
        pos[1] = string_head[1];
        pos[2] = string_head[2];
        pos[3] = string_head[3];
        visited_4D.insert(pos);
    }
    else if (Dim == 5)
    {
        visited_5D.clear();
        std::array<int, 5> pos;
        pos[0] = string_head[0];
        pos[1] = string_head[1];
        pos[2] = string_head[2];
        pos[3] = string_head[3];
        pos[4] = string_head[4];
        visited_5D.insert(pos);
    }

    // Main loop: perform random walk until reaching the maximum number of steps N_max
    while (true)
    {
        //_________________________________________________________________________
        // Step 1: Propose a new position (nearest neighbor case)
        //_________________________________________________________________________
        
        int dir_index = rn.getRandomNum(2 * Dim);  // Random integer in [0, 2*Dim-1]
        int axis = dir_index % Dim;                // Select which axis to move
        int sign = (dir_index < Dim) ? 1 : -1;     // Direction: forward (+1) or backward (-1)
        string_head[axis] += sign;                 // Move one step along the selected axis

        // Insert the new position into the visited set and update N_range
        if (Dim == 1)
        {
            visited_1D.insert(string_head[0]);
            N_range = visited_1D.size();
        }
        else if (Dim == 2)
        {
            std::array<int, 2> pos;
            pos[0] = string_head[0];
            pos[1] = string_head[1];
            visited_2D.insert(pos);
            N_range = visited_2D.size();
        }
        else if (Dim == 3)
        {
            std::array<int, 3> pos;
            pos[0] = string_head[0];
            pos[1] = string_head[1];
            pos[2] = string_head[2];
            visited_3D.insert(pos);
            N_range = visited_3D.size();
        }
        else if (Dim == 4)
        {
            std::array<int, 4> pos;
            pos[0] = string_head[0];
            pos[1] = string_head[1];
            pos[2] = string_head[2];
            pos[3] = string_head[3];
            visited_4D.insert(pos);
            N_range = visited_4D.size();
        }
        else if (Dim == 5)
        {
            std::array<int, 5> pos;
            pos[0] = string_head[0];
            pos[1] = string_head[1];
            pos[2] = string_head[2];
            pos[3] = string_head[3];
            pos[4] = string_head[4];
            visited_5D.insert(pos);
            N_range = visited_5D.size();
        }

        // Check if the walker returns to the origin
        bool at_origin = true;
        double r2_now = 0;
        for (size_t i = 0; i < string_head.size(); ++i) {
            r2_now += string_head[i] * string_head[i];
            
            if (string_head[i] != 0) {
                at_origin = false;
            }
        }

        if (at_origin) {
            Mn += 1;
            Pn = true;
        }
        
        r2 += r2_now;
        r += std::sqrt(r2_now);
        
        //_________________________________________________________________________
        // Step 2: Increase the walk length
        //_________________________________________________________________________
        length_string++;

        // Calculate the current distance from the origin and update the maximum radius
        // R_now = 0;
        // for (size_t i = 0; i < string_head.size(); ++i) {
        //     R_now += string_head[i] * string_head[i];
        // }
        // R_now = std::sqrt(R_now);
        // if (R_now > R_max) R_max = R_now;

        double max_now = *std::max_element(string_head.begin(), string_head.end());
        if (max_now > R_max) R_max = max_now;

        //_________________________________________________________________________
        // Step 3: Check if any step-length threshold is reached, record max radius if so
        //_________________________________________________________________________
        for (size_t i = 0; i < thresholds.size(); ++i) {
            if (!flags[i] && length_string >= thresholds[i]) {
                flags[i] = true;                  // Mark as recorded
                obs.Ob[R_indices[i]] = R_max;     // Record the maximum radius
                obs.Ob[ns_indices[i]] = N_range;
                obs.Ob[Mn_indices[i]] = Mn;       // Record the number of returns to origin
                obs.Ob[Pn_indices[i]] = Pn ? 1.0 : 0.0; // Record the probability of return to origin

                obs.Ob[r_indices[i]] = r / length_string;         // Record the average distance from origin
                obs.Ob[r2_indices[i]] = r2 / length_string;       // Record the average squared distance

                // If the maximum number of steps N_max is reached, exit the walk
                if (N_max == thresholds[i]) {
                    return;
                }
            }
        }
    }
}