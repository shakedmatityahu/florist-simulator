#include "Gardner.h"

Gardner::Gardner(std::string name) :JobOwner(name)
{
}

FlowersBouquet Gardner::prepareOrder(std::vector<std::string> vec)
{
	std::cout << this->getName(this) << " prepares flowers." << std::endl;
	FlowersBouquet bouquet = FlowersBouquet(vec);
	return vec;
}

