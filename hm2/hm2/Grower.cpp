#include "Grower.h"

Grower::Grower(std::string name, Gardner* gardner): Person(name),gardner(gardner)
{	
}

FlowersBouquet Grower::prepareOrder(std::vector<std::string> vec)
{
	std::cout << this->getName() << "prepares flowers" << std::endl;
	FlowersBouquet flb = FlowersBouquet(vec);

	return flb;
	
}

