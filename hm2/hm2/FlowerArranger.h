#pragma once
#include "Person.h"
#include <string>
#include <iostream>
#include "FlowersBouquet.h"

class FlowerArranger :
    public Person
{
public:
    void arrangeFlowers(FlowersBouquet* flb);
};

