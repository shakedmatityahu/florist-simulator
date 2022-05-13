#pragma once
#include "Person.h"
#include "FlowersBouquet.h"
#include <vector>
#include "JobOwner.h"
using namespace std;
class Gardner : JobOwner
{
public:
	Gardner(std::string);
	FlowersBouquet prepareBouquet(std::vector<std::string>);
};

