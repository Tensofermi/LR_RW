#include "../Configuration.hpp"

// Main function for Random Walk (RW)
void Configuration::RW()
{
    double mk_c, mk_s;
    //_______________________________________________________________________________

    // Initialize the walker's head position to 0 and length to 0
    std::fill(string_head.begin(), string_head.end(), xc);
    length_string = 0;
    mk_c = 0; 
    mk_s = 0;

    // Main loop: perform random walk until reaching the maximum number of steps N_max
    while (length_string <= N_max)
    {
        //_________________________________________________________________________
        // Step 1: Propose a new position (nearest neighbor case)
        //_________________________________________________________________________
        
        int dir_index = rn.getRandomNum(2 * Dim);  // Random integer in [0, 2*Dim-1]
        int axis = dir_index % Dim;                // Select which axis to move
        int sign = (dir_index < Dim) ? 1 : -1;     // Direction: forward (+1) or backward (-1)

        string_head[axis] += sign;                 // Move one step along the selected axis
        string_head[axis] = pbc_mod_v2(string_head[axis], L); // PBC


        //_________________________________________________________________________
        // Step 2: Increase the walk length
        //_________________________________________________________________________
        length_string++;
        mk_c += cos(2 * M_PI / (double)L * (string_head[0] - xc));
		mk_s += sin(2 * M_PI / (double)L * (string_head[0] - xc));

    }

    obs.Ob[para.i_chi_k] = mk_c * mk_c + mk_s * mk_s;
    // std::cout<<obs.Ob[para.i_chi_k]<<"  ";
}