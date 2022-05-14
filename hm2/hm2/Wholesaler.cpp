#include "Wholesaler.h"


Wholesaler::Wholesaler(std::string name, Grower* grower): JobOwner(name)
{
    this->grower = grower;
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> vec)
{
    std::cout << this->getName(this) << " fowards the request to " << this->getName(this->grower) << "." << std::endl;
    FlowersBouquet* bouquet = this->grower->prepareOrder(vec);
    std::cout << this->getName(this->grower) << " returns flowers to " << this->getName(this) << "." << std::endl;
    return bouquet;
}
