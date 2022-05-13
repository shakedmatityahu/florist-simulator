#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class FlowersBouquet
{
private:
	std::vector<std::string> Bouquet;
public:
	FlowersBouquet(std::vector<std::string>);
	bool is_arranged();
	void arrange();
	std::string summary();
};

