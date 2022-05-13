#include "main.h"

int main(int argc, char** argv) {
	std::cout << "Hello World" << std::endl;
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	Gardner* garett = new Gardner("Garett");
	Grower* gray = new Grower("Gray", garett);
	Wholesaler* watson = new Wholesaler("Watson", gray);
	FlowerArranger* flora = new FlowerArranger("Flora");
	DeliveryPerson* dylan = new DeliveryPerson("Dylan");
	Florist* fred = new Florist("Fred", watson, flora, dylan);
	std::vector <std::string > flowers = { "Roses", "Violets" };
	chris->orderFlowers(fred, robin, flowers);
	FlowersBouquet* bouquet = new FlowersBouquet(flowers);

	robin->acceptFlowers(bouquet);
	std::cout << "Goodbye World" << std::endl;

}