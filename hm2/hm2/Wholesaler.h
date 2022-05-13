#pragma once
#include "Person.h"
#include "Grower.h"
class Wholesaler : public JobOwner
{
private:
	Grower* grower;
public:
	Wholesaler(std::string name, Grower* grower);
	FlowersBouquet acceptOrder(std::vector <std::string>);

};

