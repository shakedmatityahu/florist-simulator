#pragma once
#include <string>
#include <iostream>
#include "JobOwner.h"
#include "FlowersBouquet.h"
using namespace std;

class FlowerArranger :
    public JobOwner
{
public:
    FlowerArranger(std::string);
    void arrangeFlowers(FlowersBouquet*);
};

