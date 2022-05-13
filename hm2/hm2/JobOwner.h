#pragma once
#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include "Gardner.h"
#include "Grower.h"

using namespace std;
class JobOwner :  Person
{
public:
	std::string getName(Florist* f);
	std::string getName(Wholesaler* w);
	std::string getName(DeliveryPerson* d);
	std::string getName(FlowerArranger* fa);
	std::string getName(Gardner* garden);
	std::string getName(Grower* grow);

};

