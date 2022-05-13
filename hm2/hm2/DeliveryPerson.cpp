#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name): JobOwner(name)
{
}

bool DeliveryPerson::is_arranged()
{
	return false;
}

void DeliveryPerson::arrange()
{

}
