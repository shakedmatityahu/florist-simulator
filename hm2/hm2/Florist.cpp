#pragma once
#include "Florist.h"


Florist::Florist(std::string name, Wholesaler* wholesaler) : Person(name), wholesaler(wholesaler)
{}

std::string Florist:: getName() {
	return "Florist " + Person::getName();
}
void Florist::acceptOrder(Person* p, std::vector<std::string> flowers)
{
	std::cout << this->getName() << " fowards request to " << wholesaler->getName() << "." << std:: endl;
	wholesaler->acceptOrder(flowers);
}
