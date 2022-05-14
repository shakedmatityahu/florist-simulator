#include "FlowerArranger.h"



void arrangeFlowers(FlowersBouquet* flb)
{
	flb->arrange();
}

FlowerArranger::FlowerArranger(std::string name): JobOwner(name)
{
}
