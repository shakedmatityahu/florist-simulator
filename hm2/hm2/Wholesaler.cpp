#include "Wholesaler.h"

int Wholesaler::acceptOrder(std::vector<std::string>)
{
    std::cout << this->getName() << " fowards the request to " << grower->getName();
    return 0;
}
