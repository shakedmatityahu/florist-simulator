#include "FlowerArranger.h"


FlowerArranger::FlowerArranger(std::string name): JobOwner(name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flb)
{
	std::cout << this->getName(this) <<" arranges flowers." << std::endl;
	flb->arrange();
}
