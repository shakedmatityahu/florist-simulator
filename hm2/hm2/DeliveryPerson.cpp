#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name): JobOwner(name)
{
}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* fb)
{    
    std::cout << this->getName(this) << " delivers flowers " << p->getName() << std::endl;
    p->acceptFlowers(fb);
}



