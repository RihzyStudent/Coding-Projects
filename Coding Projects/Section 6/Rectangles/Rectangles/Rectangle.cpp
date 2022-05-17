#include "Rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle() {
	this-> length = 1.0;
	this->width = 1.0;
}
rectangle::rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}
double rectangle::getLength() const {
	return length;
}
double rectangle::getWidth() const {
	return width;
}
double rectangle::area() const {
	return length * width;
}
void rectangle::setLength(double length) {
	this->length = length;
}
void rectangle::setWidth(double width) {
	this->width = width;
}
double rectangle::perimeter() const {
	return 2 * (length + width);
}