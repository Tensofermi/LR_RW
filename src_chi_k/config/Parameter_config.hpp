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

    // Observable label
    int i_chi_k;
    int i_corr_L;
    int i_dist_wrap;
    int i_dist_unwrap;

    // Distribution label

};