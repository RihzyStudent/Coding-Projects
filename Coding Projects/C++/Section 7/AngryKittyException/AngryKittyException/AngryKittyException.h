#ifndef ANGRYKITTYEXCEPTION_H
#define ANGRYKITTYEXCEPTION_H
using namespace std;
#include <stdexcept>

class angrykitty : public runtime_error{
	public: 
		angrykitty() : runtime_error("Made Kitty Angry!") {}
		angrykitty(const string& err) :runtime_error(err) {}
};


#endif