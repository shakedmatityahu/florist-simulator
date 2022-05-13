#pragma once
#include "Person.h"
#include "FlowersBouquet.h"
#include <vector>
class Gardner : Person
{
public:
	Gardner(std::string);
	FlowersBouquet prepareBouquet(std::vector<std::string>);
};

