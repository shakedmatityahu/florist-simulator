#pragma once
#include <string>
#include <iostream>
#include <vector>

class Florist;

class Person
{
protected:
	std::string name;
public:
	Person(std::string);

	std::string getName();
	void orderFlowers(Florist* f, Person* p, std::vector < std::string> flowers);

	


	
		/*void acceptFlowers(FlowersBouquet)
		{
			std::cout << "acceptFlowers Not emplimented yet" << std::endl;			
		}*/

};