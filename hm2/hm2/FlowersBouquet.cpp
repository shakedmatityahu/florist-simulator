#include "FlowersBouquet.h"
using namespace std;

FlowersBouquet::FlowersBouquet(vector<string> vec)
{
	
	this->is_arranged =false;
	for(int i = 0; i < vec.size();i++)
	{
		this->Bouquet.push_back(vec[i]);
	}
}
void FlowersBouquet::arrange()
{
	this->is_arranged = true;;
}


string FlowersBouquet::summary()
{
	std::string flowers = {};
	flowers += this->Bouquet[0];

	for (int i = 1; i < this->Bouquet.size();i++)
	{
		flowers += ", " + this->Bouquet[i];
	}
	return flowers;
}

bool FlowersBouquet::isArr()
{
	return this->is_arranged;
}
