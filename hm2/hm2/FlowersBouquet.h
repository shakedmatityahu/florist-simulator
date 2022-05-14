#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class FlowersBouquet
{
private:
	bool is_arranged;
	std::vector<std::string> Bouquet;
public:
	FlowersBouquet(std::vector<std::string>);
	void arrange();
	std::string summary();
};

