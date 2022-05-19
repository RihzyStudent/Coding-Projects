#ifndef SHOPPING_H
#define SHOPPING_H
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class shopping {
	public:
		void populateVector(vector <string> list,ifstream& input,string iname);
		void populateFile(vector <string> list,ofstream& output,string oname);
	private:
};


#endif // !SHOPPING_H
