#include <iostream>
#include "Warp.h"
using namespace std;

void warpTest(int temp);

int main() {
	cout << "Temperature probe started." << '\n';
	try {
		for (int i = 0; i < 5; i++)
		{
			warpTest(i);
		}
		warpTest(81);
	}
	catch (const warp& err)
	{
		cout << err.what() << endl;
	}
}
void warpTest(int temp)
{
	if (temp <= 80)
	{
		cout<<"Temperature nominal."<<'\n';
	}
	else
	{
		throw warp();
	}
}