#pragma once
#include "Person.h"
#include <string>
#include <iostream>
#include "FlowersBouquet.h"
using namespace std;


class FlowerArranger : public Person
{
public:
    FlowerArranger(std:: string name);
    void arrangeFlowers(FlowersBouquet* flb);
};

