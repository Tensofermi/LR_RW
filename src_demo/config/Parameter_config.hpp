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
    int D, R;  // dimension and distance  
    double sigma; // decay exponent

    // Observable label
    int i_N_8, i_N2_8;
    int i_N_16, i_N2_16;
    int i_N_32, i_N2_32;
    int i_N_64, i_N2_64;
    int i_N_128, i_N2_128;
    int i_N_256, i_N2_256;
    int i_N_512, i_N2_512;
    int i_N_1024, i_N2_1024;
    int i_N_2048, i_N2_2048;
    int i_N_4096, i_N2_4096;
    int i_N_8192, i_N2_8192;
    int i_N_16384, i_N2_16384;
    int i_N_32768, i_N2_32768;
    int i_N_65536, i_N2_65536;
    int i_N_131072, i_N2_131072;   // R = 2^17

    // Distribution label

};