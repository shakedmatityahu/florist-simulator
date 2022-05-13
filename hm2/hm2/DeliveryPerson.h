#pragma once
#include "Person.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class DeliveryPerson :
    public Person
{

public:
	DeliveryPerson(std:: string name );
	bool is_arranged();
	void arrange();
};

