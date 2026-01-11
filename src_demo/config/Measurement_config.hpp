# pragma once

// ------------------------------------------------------------------------
// This function passes the config data into the observable for collection.
// ------------------------------------------------------------------------
void Configuration::measure()
{
    
    obs.Ob[para.i_N2_8] = obs.Ob[para.i_N_8] * obs.Ob[para.i_N_8];
    obs.Ob[para.i_N2_16] = obs.Ob[para.i_N_16] * obs.Ob[para.i_N_16];
    obs.Ob[para.i_N2_32] = obs.Ob[para.i_N_32] * obs.Ob[para.i_N_32];
    obs.Ob[para.i_N2_64] = obs.Ob[para.i_N_64] * obs.Ob[para.i_N_64];
    obs.Ob[para.i_N2_128] = obs.Ob[para.i_N_128] * obs.Ob[para.i_N_128];
    obs.Ob[para.i_N2_256] = obs.Ob[para.i_N_256] * obs.Ob[para.i_N_256];
    obs.Ob[para.i_N2_512] = obs.Ob[para.i_N_512] * obs.Ob[para.i_N_512];
    obs.Ob[para.i_N2_1024] = obs.Ob[para.i_N_1024] * obs.Ob[para.i_N_1024];
    obs.Ob[para.i_N2_2048] = obs.Ob[para.i_N_2048] * obs.Ob[para.i_N_2048];
    obs.Ob[para.i_N2_4096] = obs.Ob[para.i_N_4096] * obs.Ob[para.i_N_4096];
    obs.Ob[para.i_N2_8192] = obs.Ob[para.i_N_8192] * obs.Ob[para.i_N_8192];
    obs.Ob[para.i_N2_16384] = obs.Ob[para.i_N_16384] * obs.Ob[para.i_N_16384];
    obs.Ob[para.i_N2_32768] = obs.Ob[para.i_N_32768] * obs.Ob[para.i_N_32768];
    obs.Ob[para.i_N2_65536] = obs.Ob[para.i_N_65536] * obs.Ob[para.i_N_65536];
    obs.Ob[para.i_N2_131072] = obs.Ob[para.i_N_131072] * obs.Ob[para.i_N_131072];


}