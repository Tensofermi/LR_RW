#pragma once
#include <bits/stdc++.h>
#include "../../system/Header.hpp"

class Configuration
{
    Clock& ck;
    IOControl& io;
    RandomNumGen& rn;
    Parameter& para;
    Observable& obs;
    Histogram& his;

public:
    //--- Configuration
    int R_max;
    int Dim;
    double Sigma;
    std::vector<long> string_head;
    long length_string;


public:
std::string infoConfig()
{
    return 
        "====================\n"
        "This program simulates the random walk model.\n"
        "====================\n";
};


    Configuration(Clock& _ck, IOControl& _io, RandomNumGen& rn, Parameter& _para, Observable& _obs, Histogram& _his);
    void initialConf();
    void initialMeas();
    void initialObsr();

    void updateCnf();
    bool measureOrNot();
    void measure();
    void writeCnf();

    void printConfig(int _index);
    void squarePrint();
    // void corrFunPrint();

    void checkCnf();
    

    void randSphere(std::vector<double>& dx);
    // Update Algorithm
    void RW(); 
    void RW_LR();

};
