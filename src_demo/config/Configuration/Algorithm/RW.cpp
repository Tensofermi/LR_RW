#include "../Configuration.hpp"

void Configuration::RW()
{
 
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
    
    while (true)
    {
        //_________________________________________________________________________
        // Step 1: propose a new position (NN case)
        //_________________________________________________________________________
        
        int dir_index = rn.getRandomNum(2 * Dim);  // 0 ~ 2*Dim-1

        int axis = dir_index % Dim;
        int sign = (dir_index < Dim) ? 1 : -1; 
        string_head[axis] += sign;

        long max_dist = 0;
        for (size_t i = 0; i < string_head.size(); ++i) {
            long abs_val = std::abs(string_head[i]);
            if (abs_val > max_dist) {
                max_dist = abs_val;
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