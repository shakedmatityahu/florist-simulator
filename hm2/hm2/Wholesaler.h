#pragma once
#include "Person.h"
#include "Grower.h"
class Wholesaler : public Person
{
	private:
		Grower*   grower;
	public:
		Wholesaler(std::string name, Grower* grower);
		int acceptOrder(std:: vector <std :: string>);

};
