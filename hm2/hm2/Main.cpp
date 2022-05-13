#include "main.h"
#include <iostream>
#include "Person.h"
#include "Wholesaler.h"
#include "Florist.h"
#include <vector>

int main(int argc, char** argv) {
	std::cout << "Hello World" << std::endl;
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	Grower* gray = new Grower("Gray");
	Wholesaler* watson = new Wholesaler("Watson", gray);
	Florist* fred = new Florist("Fred", watson);
	std::vector <std::string > flowers = { "Roses", "Violets" };
	chris->orderFlowers(fred, robin, flowers);
	std::cout << "Goodbye World" << std::endl;

}