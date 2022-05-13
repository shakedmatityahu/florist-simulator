#pragma once
#include "Person.h"
#include "Gardner.h"
class Grower : public Person
{
private:
	//Gardner* gardner;
public:
	//Grower(std::string, Gardner* gardner);
	Grower(std::string);
	int prepareOrder(std::vector <std::string>);
	


};

