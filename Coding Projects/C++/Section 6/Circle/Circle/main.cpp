#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	Circle c1(10);
	Circle c2;
	cout<<c1.getradius()<<endl;
	cout << c2.getradius() << endl;

	c2.setRadius(201);
	cout << c2.getradius() << endl;

	cout << "c1 circumference is: " << c1.circumference() << " and area is :"
		<< c1.area() << endl;
	cout << "c2 circumference is: " << c2.circumference()
		<< " and area is: " << c2.area() << endl;

}