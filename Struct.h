#ifndef STRUCT_H
#define STRUCT_H
#pragma once
#include <string>

using namespace std;

struct Region{
    int _year;
    string _region;
    double _npg;
    double _birth_rate;
    double _death_rate;
    double _gdw;
    double _urbanization;
    Region(int year, string region, double npg, double birth_rate, double death_rate, double gdw, double urbanization) :
        _year(year), _region(region), _npg(npg), _birth_rate(birth_rate), _death_rate(death_rate), _gdw(gdw), _urbanization(urbanization)
    {}
};

#endif // STRUCT_H
