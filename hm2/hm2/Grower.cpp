#include "Grower.h"

Grower::Grower(std::string name, Gardner* gardner) : JobOwner(name)
{
	this->gardner = gardner;
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> vec)
{
	std::cout << this->getName(this) << " forwards the request to " << this->getName(this->gardner) << "." << std::endl;
	FlowersBouquet* flb = this->gardner->prepareOrder(vec);
	std::cout << this->getName(this->gardner) << " returns flowers to " << this->getName(this) << "." << std::endl;
	return flb;

}

