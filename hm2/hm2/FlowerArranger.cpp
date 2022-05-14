#include "FlowerArranger.h"


FlowerArranger::FlowerArranger(std::string name): JobOwner(name)
{
}

void arrangeFlowers(FlowersBouquet* flb)
{
	flb->arrange();
	

}
