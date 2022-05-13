#pragma once
#include "Person.h"
#include "FlowersBouquet.h"
#include <vector>
#include "Person.h"
using namespace std;
class Gardner : public Person
{
public:
	Gardner(std::string);
	std:: string getName();
	FlowersBouquet prepareOrder(std::vector<std::string>);
};

