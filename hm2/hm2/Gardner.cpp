#include "Gardner.h"

Gardner::Gardner(std::string name) :Person(name)
{
}

std::string Gardner::getName()
{	
		return "Gardner " + Person::getName();
}

FlowersBouquet Gardner::prepareOrder(std::vector<std::string> vec)
{
	std::cout << this->getName() << " prepares flowers." << std::endl;
	FlowersBouquet bouquet = FlowersBouquet(vec);
	return vec;
}
