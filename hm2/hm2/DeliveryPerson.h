#pragma once
#include "JobOwner.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class DeliveryPerson :
    public JobOwner
{
public:
	DeliveryPerson(std::string name);
	void deliver(Person*, FlowersBouquet*);
	
};

