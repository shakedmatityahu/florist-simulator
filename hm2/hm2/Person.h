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
	void orderFlowers(Florist* f, Person* p, std::vector < std::string> flowers)
	{
		std::string concateate = {};
		for (int i = 0; i <= flowers.size();i++)
		{
			concateate += flowers[i];
		}
		std::cout << this->name << " orders flowers to " << p->getName() << " from  " << f.getName() << concateate;
		f.acceptOrder(p, flowers);
	}


	
		/*void acceptFlowers(FlowersBouquet)
		{
			std::cout << "acceptFlowers Not emplimented yet" << std::endl;			
		}*/

};