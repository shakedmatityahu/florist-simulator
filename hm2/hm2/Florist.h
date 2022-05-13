#pragma once
#include "Person.h"
#include "Wholesaler.h"

class Florist : public  Person
{
private:
	Wholesaler* wholesaler;
	//Arranger*  arranger;
	//DeliveryPerson*  deliveryPerson;

public:
	Florist(std::string name, Wholesaler* wholesaler);
	void acceptOrder(Person* p, std::vector<std::string>);

};