#pragma once
#include <bits/stdc++.h>
#include "../../system/Header.hpp"


struct ArrayHash2D {
    size_t operator()(const std::array<int, 2>& a) const {
        size_t seed = std::hash<int>{}(a[0]);
        seed ^= std::hash<int>{}(a[1]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};

struct ArrayHash3D {
    size_t operator()(const std::array<int, 3>& a) const {
        size_t seed = std::hash<int>{}(a[0]);
        seed ^= std::hash<int>{}(a[1]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= std::hash<int>{}(a[2]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};

struct ArrayHash4D {
    size_t operator()(const std::array<int, 4>& a) const {
        size_t seed = std::hash<int>{}(a[0]);
        seed ^= std::hash<int>{}(a[1]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= std::hash<int>{}(a[2]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= std::hash<int>{}(a[3]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};

struct ArrayHash5D {
    size_t operator()(const std::array<int, 5>& a) const {
        size_t seed = std::hash<int>{}(a[0]);
        seed ^= std::hash<int>{}(a[1]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= std::hash<int>{}(a[2]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= std::hash<int>{}(a[3]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= std::hash<int>{}(a[4]) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
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
    long long N_max;
    int Dim;
    double Sigma;
    std::vector<long> string_head;
    long length_string;
    long N_range;
    std::unordered_set<int> visited_1D;
    std::unordered_set<std::array<int, 2>, ArrayHash2D> visited_2D;
    std::unordered_set<std::array<int, 3>, ArrayHash3D> visited_3D;
    std::unordered_set<std::array<int, 4>, ArrayHash4D> visited_4D;
    std::unordered_set<std::array<int, 5>, ArrayHash5D> visited_5D;


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
