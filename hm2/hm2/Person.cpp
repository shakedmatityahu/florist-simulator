#include "Person.h"

Person::Person(std::string name) : name(name) {}

 std::string Person::getName()
{
	return this->name;
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> flowers)
{
	std::string concateate = {};
	for (int i = 0; i < flowers.size();i++)
	{
		concateate += flowers[i];
	}
	std::cout << this->name << " orders flowers to " << p->getName() << " from  " << f->getName() << concateate;
	f->acceptOrder(p, flowers);
}

