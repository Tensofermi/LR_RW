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
    int D, N;  // dimension and step
    double sigma; // decay exponent

    // Observable label
    int i_R_1e1, i_R2_1e1;
    int i_R_1e2, i_R2_1e2;
    int i_R_1e3, i_R2_1e3;
    int i_R_1e4, i_R2_1e4;
    int i_R_1e5, i_R2_1e5;
    int i_R_1e6, i_R2_1e6;    // R ~ 1024
    int i_R_1e7, i_R2_1e7;    
    int i_R_1e8, i_R2_1e8;    
    int i_R_1e9, i_R2_1e9;    
    int i_R_1e10, i_R2_1e10;  
    
    int i_ns_1e1, i_ns2_1e1;
    int i_ns_1e2, i_ns2_1e2;
    int i_ns_1e3, i_ns2_1e3;
    int i_ns_1e4, i_ns2_1e4;
    int i_ns_1e5, i_ns2_1e5;
    int i_ns_1e6, i_ns2_1e6;    // ns ~ 1024
    int i_ns_1e7, i_ns2_1e7;    
    int i_ns_1e8, i_ns2_1e8;    
    int i_ns_1e9, i_ns2_1e9;    
    int i_ns_1e10, i_ns2_1e10;  

    int i_Mn_1e1;
    int i_Mn_1e2;
    int i_Mn_1e3;
    int i_Mn_1e4;
    int i_Mn_1e5;
    int i_Mn_1e6;    // Mn ~ 1024
    int i_Mn_1e7;    
    int i_Mn_1e8;    
    int i_Mn_1e9;    
    int i_Mn_1e10;  

    int i_Pn_1e1;
    int i_Pn_1e2;
    int i_Pn_1e3;
    int i_Pn_1e4;
    int i_Pn_1e5;
    int i_Pn_1e6;    // Pn ~ 1024
    int i_Pn_1e7;    
    int i_Pn_1e8;    
    int i_Pn_1e9;    
    int i_Pn_1e10;  

    int i_r_1e1, i_r2_1e1;
    int i_r_1e2, i_r2_1e2;
    int i_r_1e3, i_r2_1e3;
    int i_r_1e4, i_r2_1e4;
    int i_r_1e5, i_r2_1e5;
    int i_r_1e6, i_r2_1e6;    // r ~ 1024
    int i_r_1e7, i_r2_1e7;
    int i_r_1e8, i_r2_1e8;
    int i_r_1e9, i_r2_1e9;
    int i_r_1e10, i_r2_1e10;
    

    // Distribution label

};