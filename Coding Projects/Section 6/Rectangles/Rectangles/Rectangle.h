#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {
public:
	rectangle();
	rectangle(double length, double width);
	double getLength() const;
	double getWidth() const;
	double area() const;
	void setLength(double length);
	void setWidth(double width);
	double perimeter() const;


private:
	double length;
	double width;
};



#endif // !RECTANGLE_H
