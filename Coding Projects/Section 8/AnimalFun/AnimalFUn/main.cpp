#include "Animal.h"
#include "Dog.h"
using namespace std;

int main() {
	/*animal myAnimal("Sam", 100);*/
	dog dog1("Rover", 80, "Greyhound");
	animal* lab = new dog("Fido", 115, "Golden Retreiver");

	cout << lab->makeNoise() << endl;
	cout << lab->eat() << endl;

	//cout << "Animal name: " << myAnimal.getName() << endl;
	//cout << "Animal weight: " << myAnimal.getWeight() << endl;
	//cout <<"Animals noise: "<< myAnimal.makeNoise() << endl;

	//cout << "Dog's name: " << dog1.getName() << endl;
	//cout << "Dog's weight: " << dog1.getWeight() << endl;
	//cout << "Dog's noise: " << dog1.makeNoise() << endl;
	//dog1.digHole();
	//dog1.chaseCat();

}




