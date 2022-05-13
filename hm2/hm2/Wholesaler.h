#pragma once
#include "Person.h"
#include "Grower.h"
class Wholesaler : public Person
{
	private:
		Grower*   grower;
	public:
		int acceptOrder(std:: vector <std :: string>);
};

