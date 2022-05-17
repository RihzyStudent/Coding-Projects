#ifndef DOG_H
#define DOH_H
#include <string>
using namespace std;
class Dog {
	public:
		Dog(string breed);
		string getBreed() const noexcept;
	private:
		string breed;
};

#endif
