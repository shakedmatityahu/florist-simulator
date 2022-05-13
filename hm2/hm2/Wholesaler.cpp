#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name ) :Person(name)
{
}

int Wholesaler::acceptOrder(std::vector<std::string>)
{
    std::cout << this->getName() << " fowards the request to " << grower->getName();
    return 0;
}
