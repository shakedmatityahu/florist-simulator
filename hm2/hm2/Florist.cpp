#pragma once
#include "Florist.h"



Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* arranger, DeliveryPerson* deliveryPerson) : Person(name)
{
	this->wholesaler = wholesaler;
	this->arranger = arranger;
	this->deliveryPerson = deliveryPerson;
}

std::string Florist:: getName() 
{
	return "Florist " + Person::getName();
}


void Florist::acceptOrder(Person* p, std::vector<std::string> flowers)
{
	std::cout << this->getName() << " fowards request to " << wholesaler->getName() << "." << std:: endl;
	wholesaler->acceptOrder(flowers);
	std::cout << this->wholesaler->getName() << " returns flowers to " << this->getName() << std::endl;

}
