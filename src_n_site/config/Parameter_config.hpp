#pragma once

struct Parameter
{
    // Simulation Parameters
    int Seed;
    unsigned long N_Measure;
    unsigned long N_Each;
    unsigned long N_Therm;
    unsigned long N_Total;
    unsigned long NBlock;
    unsigned long MaxNBin;
    unsigned long NperBin;

    // Model Parameters
    int D, L;  // dimension and step
    double sigma; // decay exponent

    //=================================
    // a = 1/8, 2/8, 3/8, 4/8, 5/8, 6/8, 7/8, 8/8

    // Observable label
    int i_chi_k_1, i_chi_k_2, i_chi_k_3, i_chi_k_4, i_chi_k_5, i_chi_k_6, i_chi_k_7, i_chi_k_8;
    int i_corr_L_1, i_corr_L_2, i_corr_L_3, i_corr_L_4, i_corr_L_5, i_corr_L_6, i_corr_L_7, i_corr_L_8;
    int i_dist_wrap_1, i_dist_wrap_2, i_dist_wrap_3, i_dist_wrap_4, i_dist_wrap_5, i_dist_wrap_6, i_dist_wrap_7, i_dist_wrap_8;
    int i_dist_unwrap_1, i_dist_unwrap_2, i_dist_unwrap_3, i_dist_unwrap_4, i_dist_unwrap_5, i_dist_unwrap_6, i_dist_unwrap_7, i_dist_unwrap_8;
    int i_nsite_1, i_nsite_2, i_nsite_3, i_nsite_4, i_nsite_5, i_nsite_6, i_nsite_7, i_nsite_8;

    int i_dist_wrap2_1, i_dist_wrap2_2, i_dist_wrap2_3, i_dist_wrap2_4, i_dist_wrap2_5, i_dist_wrap2_6, i_dist_wrap2_7, i_dist_wrap2_8;
    int i_dist_unwrap2_1, i_dist_unwrap2_2, i_dist_unwrap2_3, i_dist_unwrap2_4, i_dist_unwrap2_5, i_dist_unwrap2_6, i_dist_unwrap2_7, i_dist_unwrap2_8;
    int i_nsite2_1, i_nsite2_2, i_nsite2_3, i_nsite2_4, i_nsite2_5, i_nsite2_6, i_nsite2_7, i_nsite2_8;

    // Distribution label

};