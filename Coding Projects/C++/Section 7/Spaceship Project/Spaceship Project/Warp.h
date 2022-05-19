#ifndef WARP_H
#define WARP_H
#include <stdexcept>
using namespace std;

class warp : public overflow_error {
	public:
		warp() :overflow_error("Warp drive has exceeded safe temperature tolerance.") {}
};
#endif