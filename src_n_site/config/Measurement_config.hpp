# pragma once

// ------------------------------------------------------------------------
// This function passes the config data into the observable for collection.
// ------------------------------------------------------------------------
void Configuration::measure()
{
    
    obs.Ob[para.i_R2_1e1] = obs.Ob[para.i_R_1e1] * obs.Ob[para.i_R_1e1];
    obs.Ob[para.i_R2_1e2] = obs.Ob[para.i_R_1e2] * obs.Ob[para.i_R_1e2];
    obs.Ob[para.i_R2_1e3] = obs.Ob[para.i_R_1e3] * obs.Ob[para.i_R_1e3];
    obs.Ob[para.i_R2_1e4] = obs.Ob[para.i_R_1e4] * obs.Ob[para.i_R_1e4];
    obs.Ob[para.i_R2_1e5] = obs.Ob[para.i_R_1e5] * obs.Ob[para.i_R_1e5];
    obs.Ob[para.i_R2_1e6] = obs.Ob[para.i_R_1e6] * obs.Ob[para.i_R_1e6];
    obs.Ob[para.i_R2_1e7] = obs.Ob[para.i_R_1e7] * obs.Ob[para.i_R_1e7];
    obs.Ob[para.i_R2_1e8] = obs.Ob[para.i_R_1e8] * obs.Ob[para.i_R_1e8];
    obs.Ob[para.i_R2_1e9] = obs.Ob[para.i_R_1e9] * obs.Ob[para.i_R_1e9];
    obs.Ob[para.i_R2_1e10] = obs.Ob[para.i_R_1e10] * obs.Ob[para.i_R_1e10];

    obs.Ob[para.i_ns2_1e1] = obs.Ob[para.i_ns_1e1] * obs.Ob[para.i_ns_1e1];
    obs.Ob[para.i_ns2_1e2] = obs.Ob[para.i_ns_1e2] * obs.Ob[para.i_ns_1e2];
    obs.Ob[para.i_ns2_1e3] = obs.Ob[para.i_ns_1e3] * obs.Ob[para.i_ns_1e3];
    obs.Ob[para.i_ns2_1e4] = obs.Ob[para.i_ns_1e4] * obs.Ob[para.i_ns_1e4];
    obs.Ob[para.i_ns2_1e5] = obs.Ob[para.i_ns_1e5] * obs.Ob[para.i_ns_1e5];
    obs.Ob[para.i_ns2_1e6] = obs.Ob[para.i_ns_1e6] * obs.Ob[para.i_ns_1e6];
    obs.Ob[para.i_ns2_1e7] = obs.Ob[para.i_ns_1e7] * obs.Ob[para.i_ns_1e7];
    obs.Ob[para.i_ns2_1e8] = obs.Ob[para.i_ns_1e8] * obs.Ob[para.i_ns_1e8];
    obs.Ob[para.i_ns2_1e9] = obs.Ob[para.i_ns_1e9] * obs.Ob[para.i_ns_1e9];
    obs.Ob[para.i_ns2_1e10] = obs.Ob[para.i_ns_1e10] * obs.Ob[para.i_ns_1e10];

}