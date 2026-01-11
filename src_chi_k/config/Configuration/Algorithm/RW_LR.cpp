#include "../Configuration.hpp"

// Generate a random direction on a unit sphere
void Configuration::randSphere(std::vector<double>& dx)
{
    const int dx_size = dx.size();
    const double epsilon = 1e-16;

    if (dx_size == 1)
    {
        dx[0] = (rn.getRandomDouble() > 0.5) ? 1.0 : -1.0;
        return;
    }
    if (dx_size == 2)
    {
        // 2D: sample angle theta uniformly from [0, 2pi)
        double theta = 2.0 * M_PI * rn.getRandomDouble();
        dx[0] = cos(theta);
        dx[1] = sin(theta);
        return;
    }
    if (dx_size == 3)
    {
        // 3D: sample phi in [0, 2pi), costheta in [-1, 1]
        double phi = 2.0 * M_PI * rn.getRandomDouble();
        double costheta = 2.0 * rn.getRandomDouble() - 1.0;
        double sintheta = sqrt(1.0 - costheta * costheta);
        dx[0] = sintheta * cos(phi);
        dx[1] = sintheta * sin(phi);
        dx[2] = costheta;
        return;
    }

    // General case: Gaussian sampling and normalization
    double lengthSquared;
    do {
        lengthSquared = 0.0;
        for (int i_N = 0; i_N < dx_size; ++i_N) {
            dx[i_N] = rn.getGaussian();
            lengthSquared += dx[i_N] * dx[i_N];
        }
    } while (lengthSquared < epsilon);

    const double length = std::sqrt(lengthSquared);
    for (int i_N = 0; i_N < dx_size; ++i_N) {
        dx[i_N] /= length;
    }
}

// Main function for Long-Range Random Walk (RW_LR)
void Configuration::RW_LR()
{
    // std::cout<<N_max<<"____";

    std::vector<double> dx;
    double r;
    double r0 = 0.5 * std::sqrt(Dim);  // to reach the NN case as sigma -> infinity

    double mk_c, mk_s;
    std::vector<double> d_u_now;
    double d_w_max_now, d_u_max_now;
    double d_w_max, d_u_max;

    // //_______________________________________________________________________________
    dx.resize(Dim, 0);
    d_u_now.resize(Dim, 0);

    // Initialize the walker's head position to 0 and length to 0
    std::fill(string_head.begin(), string_head.end(), xc);
    std::fill(d_u_now.begin(), d_u_now.end(), 0);
    length_string = 0;
    mk_c = 0; 
    mk_s = 0;


    // // Main loop: perform random walk until reaching the maximum number of steps N_max
    while (length_string <= N_max)
    {
    //     //_________________________________________________________________________
    //     // Step 1: Propose a new position (LR case)
    //     //_________________________________________________________________________
    //     // Randomly choose distance
        r = rn.getRandomDouble();
        r = (r == 0.0) ? 1.0 : r; // Ensure r is not zero
        r = pow(r, -1.0 / Sigma);

    //     // Randomly choose direction
        randSphere(dx);

    //     // Apply for lattice (discretize the step)
        for (size_t i = 0; i < dx.size(); ++i)
        {
            dx[i] = (long long)floor(r0 * r * dx[i] + 0.5); // Move in x direction
        }

    //     // Propose this new position
        for (size_t i = 0; i < string_head.size(); ++i) {
            string_head[i] += dx[i];
            string_head[i] = pbc_mod_v2(string_head[i], L);
            d_u_now[i] += dx[i];
        }

    //     //_________________________________________________________________________
    //     // Step 2: Increase the walk length
    //     //_________________________________________________________________________
        length_string++;
        

        mk_c += cos(2 * M_PI / (double)L * (string_head[0] - xc));
        mk_s += sin(2 * M_PI / (double)L * (string_head[0] - xc));

    }

    obs.Ob[para.i_chi_k] = mk_c * mk_c + mk_s * mk_s;


    

}