#pragma once
#include "FlowersBouquet.h"
#include <vector>
#include "JobOwner.h"
using namespace std;
class Gardner : public JobOwner
{
public:
	Gardner(std::string);
	FlowersBouquet prepareOrder(std::vector<std::string>);
};

