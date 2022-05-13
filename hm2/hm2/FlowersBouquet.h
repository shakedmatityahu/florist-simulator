#pragma once
#include <string>
#include <iostream>
#include <vector>
class FlowersBouquet
{
private:
	std::vector<std::string> Bouquet;
public:
	FlowersBouquet(std::vector<std::string>);
	bool is_arranged();
	void arrange();
};

