#pragma once
#include "JobOwner.h"
#include "Gardner.h"
#include "FlowersBouquet.h"
using namespace std;
class Grower : public JobOwner
{
private:
	Gardner* gardner;
public:
	Grower(std::string, Gardner* gardner);
	FlowersBouquet prepareOrder(std::vector <std::string>);
	


};

