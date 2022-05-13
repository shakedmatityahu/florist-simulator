#pragma once
#include "Wholesaler.h"
#include "Person.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
using namespace std;

class Florist : public Person
{
private:
	Wholesaler* wholesaler;
	FlowerArranger*  arranger;
	DeliveryPerson*  deliveryPerson;

public:
	std ::string getName();
	Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* arranger, DeliveryPerson* deliveryPerson);
	void acceptOrder(Person* p, std::vector<std::string>);


};