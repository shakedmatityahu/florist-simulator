#pragma once
#include "Person.h"
#include <string>
#include <iostream>
#include <vector>
class DeliveryPerson :
    public Person
{
private:
	std::string name;
	std::vector<std::string> bouquet;

public:
	bool is_arranged();
	void arrange();
};

