#include "Main.h"
#include <iostream>
#include "Person.h"
#include "Wholesaler.h"
#include "Florist.h"

int Main(int argc, char** argv) {
	std::cout << "Hello World" << std::endl;
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	Wholesaler* watson = new Wholesaler("Watson");
	Florist* fred = new Florist("Fred", watson);

}