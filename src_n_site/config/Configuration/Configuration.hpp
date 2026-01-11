#pragma once
#include <bits/stdc++.h>
#include "../../system/Header.hpp"
#include "../Lattice/Lattice.hpp"

struct ArrayHash2D {
    size_t operator()(const std::array<int, 2>& a) const {
        size_t seed = std::hash<int>{}(a[0]);
        seed ^= std::hash<int>{}(a[1]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};

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
    // Hypercubic Latt; 
    int L;
    long long N_max;
    int Dim;
    double Sigma;
    std::vector<long> string_head;
    long length_string;
    long xc, yc;
    std::vector<double> k_cos, k_sin;

    long N_range;
    std::unordered_set<std::array<int, 2>, ArrayHash2D> visited_2D;

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
    
    // Update Algorithm
    void RW(); 
    void RW_LR();

};
