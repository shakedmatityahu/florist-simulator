#pragma once
#include "Person.h"
#include "Grower.h"
class Wholesaler : public Person
{
	private:
		Grower* grower;
	public:
		std::string getName();
		Wholesaler(std::string name, Grower* grower);
		FlowersBouquet acceptOrder(std:: vector <std:: string>);

};

