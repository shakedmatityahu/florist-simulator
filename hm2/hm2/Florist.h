#pragma once
#include "Wholesaler.h"
#include "Person.h"

class Florist : public Person
{
private:
	Wholesaler* wholesaler;
	//Arranger*  arranger;
	//DeliveryPerson*  deliveryPerson;

public:
	std ::string getName();
	Florist(std::string name, Wholesaler* wholesaler);
	void acceptOrder(Person* p, std::vector<std::string>);

};