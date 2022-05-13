#include "FlowersBouquet.h"
using namespace std;

FlowersBouquet::FlowersBouquet(vector<string> vec)
{
	//std::vector<std::string> moshe;
	//this->Bouquet = moshe;
	//this->Bouquet = vector<string>(size, 0);
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
