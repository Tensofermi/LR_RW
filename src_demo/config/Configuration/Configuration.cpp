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
    R_max = para.R;  // Maximum length of the random walk
    Sigma = para.sigma;

    string_head.resize(Dim, 0);
    length_string = 0;

}

void Configuration::initialMeas()
{


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
