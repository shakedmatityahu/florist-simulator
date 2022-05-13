#pragma once
#include "Person.h"
class Florist;
class Wholesaler;
class DeliveryPerson;
class FlowerArranger;
class Gardner;
class Grower;

using namespace std;
class JobOwner : public Person
{
public:
	JobOwner(string);
	virtual std::string getName();
	virtual std::string getName(Person* p); //not really necessary but easier
	virtual std::string getName(Florist* f);
	virtual std::string getName(Wholesaler* w);
	virtual std::string getName(DeliveryPerson* d);
	virtual std::string getName(FlowerArranger* fa);
	virtual std::string getName(Gardner* garden);
	virtual std::string getName(Grower* grow);

};

