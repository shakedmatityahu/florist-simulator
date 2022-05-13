#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "FlowersBouquet.h"
using namespace std;
class Florist;

class Person
{
protected:
	std::string name;
public:
	Person(std::string);
	virtual std::string getName();
	void orderFlowers(Florist*, Person*, std::vector < std::string> flowers);
	void acceptFlowers(FlowersBouquet);

};