#pragma once
#include "Person.h"
#include "Gardner.h"
class Grower : public Person
{
private:
	Gardner* gardner;
public:
	Grower(std::string, Gardner* gardner);
	int prepareOrder(std::vector <std::string>);
	


};

