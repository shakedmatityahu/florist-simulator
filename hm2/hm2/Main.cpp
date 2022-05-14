#include "main.h"

int main(int argc, char** argv) {
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	Gardner* garett = new Gardner("Garett");
	Grower* gray = new Grower("Gray", garett);
	Wholesaler* watson = new Wholesaler("Watson", gray);
	FlowerArranger* flora = new FlowerArranger("Flora");
	DeliveryPerson* dylan = new DeliveryPerson("Dylan");
	Florist* fred = new Florist("Fred", watson, flora, dylan);
	std::vector <std::string > flowers = { "Roses", "Violets", "Gladiolus"};
	chris->orderFlowers(fred, robin, flowers);
	FlowersBouquet* bouquet = new FlowersBouquet(flowers);


	delete chris;
	delete robin;
	delete garett;
	delete gray;
	delete watson;
	delete flora;
	delete dylan;
	delete fred;

}