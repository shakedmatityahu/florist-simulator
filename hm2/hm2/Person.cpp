#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name) {}

 std::string Person::getName()
{
	return this->name;
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> flowers)
{
	std::string concateate = {};
	concateate +=  flowers[0];
	for (int i = 1; i < flowers.size();i++)
	{
		concateate +=", " +flowers[i];
	}
	std::cout << this->name << " orders flowers to " << p->getName() << " from  " << f->getName() << ": " << concateate << std::endl;
	f->acceptOrder(p, flowers);
}

