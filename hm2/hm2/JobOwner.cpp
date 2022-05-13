#include "JobOwner.h"

std::string JobOwner::getName(Florist* f)
{
    return "Florist " + f->getName();
}

std::string JobOwner::getName(Wholesaler* w)
{
    return "Wholesaler " + w->getName();
}

std::string JobOwner::getName(DeliveryPerson* d)
{
    return "Delivery Person " + d->getName();
}

std::string JobOwner::getName(FlowerArranger* fa)
{
    return "Flower arranger " + fa->getName();
}

std::string JobOwner::getName(Gardner* garden)
{
 //   return "Gardner " + garden->getName();
    return " ";
}

std::string JobOwner::getName(Grower* grow)
{
    return "Grower " + grow->getName();
}
