#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Florist.h"

class Person
{
protected:
	std::string name;
public:
	Person(std::string);
	virtual std::string getName();
	void orderFlowers(Florist* f, Person* p, std::vector < std::string> flowers);

};