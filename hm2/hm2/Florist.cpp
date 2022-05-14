#include "Florist.h"


Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* arranger, DeliveryPerson* deliveryPerson) : JobOwner(name)
{
	this->wholesaler = wholesaler;
	this->arranger = arranger;
	this->deliveryPerson = deliveryPerson;
}


void Florist::acceptOrder(Person* p, std::vector<std::string> flowers)
{
	std::cout << this->getName(this) << " fowards request to " << this->getName((this->wholesaler)) << "." << std::endl;

	std::vector <std::string > flowerss = { "Roses", "Violets" };
	FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
	std::cout << this->getName((this->wholesaler)) << " returns flowers to " << this->getName(this) << "." << std::endl;
	std::cout << this->getName(this) << " request flowers arrangement from " << this->getName(this->arranger) << "." << std::endl;
	this->arranger->arrangeFlowers(bouquet);
	if (bouquet->isArr())
	{
		std::cout << this->getName(this->arranger) << " returns arranged flowers to " << this->getName(this) << "." << std::endl;
		std::cout << this->getName(this) << " forwards flowers to " << this->getName(this->deliveryPerson) << "." << std::endl;
		this->deliveryPerson->deliver(p, bouquet);
	}
	else
	{
		std::cout << this->getName(this->arranger) << " order didn't came through " << std::endl;
	}
}
