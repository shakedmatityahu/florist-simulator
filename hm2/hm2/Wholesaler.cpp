#include "Wholesaler.h"

//Wholesaler::Wholesaler(std::string name) 
//    : Person(name) {}




Wholesaler::Wholesaler(std::string name, Grower* grower)
{
    this.Person.name = grower->getName();
    this->grower = grower;
}

int Wholesaler::acceptOrder(std::vector<std::string>)
{
    std::cout << this->getName(this) << " fowards the request to " << grower->getName() << std:: endl;
    return 0;
}
