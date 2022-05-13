#include "Wholesaler.h"

//Wholesaler::Wholesaler(std::string name) 
//    : Person(name) {}




std::string Wholesaler::getName()
{
    return "Wholesaler " + Person::getName();
}

Wholesaler::Wholesaler(std::string name, Grower* grower): Person(name)
{
   
    this->grower = grower;
}

FlowersBouquet Wholesaler::acceptOrder(std::vector<std::string> vec)
{
    std::cout << this->getName() << " fowards the request to " << grower->getName() << std:: endl;
    FlowersBouquet bouquet = FlowersBouquet(vec);
    this->grower->prepareOrder(vec);
    std::cout << this->grower->getName() << " returns flowers to " << this->getName() << std::endl;
    return vec;
}
