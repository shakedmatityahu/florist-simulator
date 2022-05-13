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

int Wholesaler::acceptOrder(std::vector<std::string>)
{
    std::cout << this->getName() << " fowards the request to " << grower->getName() << std:: endl;
    return 0;
}
