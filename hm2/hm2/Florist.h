#pragma once
#include "Wholesaler.h"
#include "JobOwner.h"
using namespace std;

class Florist : public JobOwner
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* arranger;
	DeliveryPerson* deliveryPerson;

public:
	Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* arranger, DeliveryPerson* deliveryPerson);
	void acceptOrder(Person* p, std::vector<std::string>);


};