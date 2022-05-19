#include "Circle.h"

Circle::Circle() {
	this->radius = 1;
}
Circle::Circle(double radius) {
	this->radius = radius;
}
double Circle::getradius() const {
	return radius;
}
void Circle::setRadius(double radius) {
	this->radius = radius;
}
double Circle::circumference() const{
	return 2 * (3.1415926535 * radius);
}
double Circle::area() const{
	return 3.1415926535 * (radius * radius);
}	