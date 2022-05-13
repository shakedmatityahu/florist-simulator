#pragma once
#include "JobOwner.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class DeliveryPerson :
    public JobOwner
{
private:
	std::string name;
	std::vector<std::string> bouquet;

public:
	DeliveryPerson(std::string name);
	bool is_arranged();
	void arrange();
};

