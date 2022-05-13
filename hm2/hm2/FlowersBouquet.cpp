#include "FlowersBouquet.h"
using namespace std;

FlowersBouquet::FlowersBouquet(vector<string> vec)
{
	
	for(int i = 0; i < vec.size();i++)
	{
		this->Bouquet.push_back(vec[i]);
	}
}

bool FlowersBouquet::is_arranged()
{
	return false;
}

void FlowersBouquet::arrange()
{
	std::cout << "leave me alone" << std::endl;
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



