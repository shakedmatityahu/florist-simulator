#include "Person.h"

Person::Person(std::string name) : name(name) 
{}

std::string Person::getName()
{
	return this->name;
}

