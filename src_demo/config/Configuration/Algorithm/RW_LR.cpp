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


void Configuration::RW_LR()
{
    std::vector<double> dx;
    double r;
    double r0 = 0.5 * std::sqrt(Dim);  // to reach the NN case as sigma -> infinity

    //_______________________________________________________________________________
       const std::vector<int> thresholds = {
        8, 16, 32, 64, 128, 256, 512,
        1024, 2048, 4096, 8192, 16384, 32768,
        65536, 131072
    };

    const std::vector<int> N_indices = {
        para.i_N_8, para.i_N_16, para.i_N_32, para.i_N_64, para.i_N_128,
        para.i_N_256, para.i_N_512, para.i_N_1024, para.i_N_2048,
        para.i_N_4096, para.i_N_8192, para.i_N_16384, para.i_N_32768,
        para.i_N_65536, para.i_N_131072
    };

    std::vector<bool> flags(thresholds.size(), false);      
    //_______________________________________________________________________________

    std::fill(string_head.begin(), string_head.end(), 0);
    length_string = 0;
    dx.resize(Dim, 0);
    
    while (true)
    {
        //_________________________________________________________________________
        // Step 1: propose a new position (LR case)
        //_________________________________________________________________________

        // randomly choose distance
        r = rn.getRandomDouble();
        r = (r == 0.0) ? 1.0 : r; // Ensure r is not zero
        r = pow(r, -1.0 / Sigma);

        // randomly choose direction
        randSphere(dx);

        // apply for lattice
        for (size_t i = 0; i < dx.size(); ++i)
        {
            dx[i] = (int)floor(r0 * r * dx[i] + 0.5); // Move in x direction
        }

        // propose this new position
        for (size_t i = 0; i < string_head.size(); ++i) {
            string_head[i] += dx[i];
        }
        
        // obtain the max length
        long max_dist = 0;
        for (size_t i = 0; i < string_head.size(); ++i) {
            long abs_val = std::abs(string_head[i]);
            if (abs_val > max_dist) {
                max_dist = abs_val;
            }
        }

        // check if out of region
        if(max_dist >= R_max) {            
            // std::cout<<max_dist_<<std::endl;
            for (size_t i = 0; i < thresholds.size(); ++i) {
                if (!flags[i]) {
                flags[i] = true;
                obs.Ob[N_indices[i]] = length_string;

                if (R_max == thresholds[i]) {
                    return;
                    }
                }
            }
        }

        //_________________________________________________________________________
        // Step 2: increase length
        //_________________________________________________________________________
        length_string++;

        //_________________________________________________________________________
        // Step 3: Check if the length of the random walk has reached the maximum length
        //_________________________________________________________________________

        for (size_t i = 0; i < thresholds.size(); ++i) {
            if (!flags[i] && max_dist >= thresholds[i]) {
            flags[i] = true;
            obs.Ob[N_indices[i]] = length_string;

            if (R_max == thresholds[i]) {
                return;
                }
           }
        }

    }
    
}