#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class animal {
	public:
		animal(string name, double weight);
		string getName() const;
		double getWeight() const;
		void setName(string name);
		void setWeight(double weight);
		virtual string makeNoise() const = 0;
		virtual string eat() const = 0;

	private:
		string name;
		double weight;
};

#endif // !ANIMAL_H
