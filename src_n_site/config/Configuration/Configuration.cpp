#include "Configuration.hpp"

Configuration::Configuration(Clock& _ck, IOControl& _io, RandomNumGen& _rn, Parameter& _para, Observable& _obs, Histogram& _his) 
: ck(_ck), io(_io), rn(_rn), para(_para), obs(_obs), his(_his)
{
    initialConf();  // for site spin 
    initialMeas();  // for k-space and cluster measurement
    initialObsr();  // for basic observables
}

void Configuration::initialConf()
{
    //--- Initialize Basic Parameters
    Dim = para.D;
    L = para.L;  // Maximum length of the random walk
    Sigma = para.sigma;

    // Latt.set(Dim, L);
    
    N_max = 1.0 * L * L;

    length_string = 0;

    xc = ceil(L / 2.0) - 1;
    yc = ceil(L / 2.0) - 1;

    string_head.resize(Dim, xc);
}

void Configuration::initialMeas()
{
    k_cos.resize(L);
    k_sin.resize(L);

    for (int i = 0; i < L; i++)
    {
        k_cos[i] = cos(2 * M_PI / (double)L * i);
        k_sin[i] = sin(2 * M_PI / (double)L * i);
    }

}

void Configuration::initialObsr()
{

}

#include "../Measurement_config.hpp"

bool Configuration::measureOrNot()
{
    return true;
}

void Configuration::writeCnf()
{
    
}

void Configuration::checkCnf()
{

}
