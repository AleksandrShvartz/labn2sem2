#include "Shape.h"
Shape::Shape(Color c) {
	color = c;
	std::cout << "Shape created1" << std::endl;
}

Shape::Shape() {
	color = UNKNOWN;
	std::cout << "Shape created0" << std::endl;
}
Color Shape::GetColor()
{
	return color;
}
Shape::Shape(const Shape& a) {
	color = a.color;
	std::cout << "Shape created2" << std::endl;
}
Shape::~Shape() {
	std::cout << "Now I am in Shape's destructor!" << std::endl;
}

 void Shape::WhereAmI()
{
	std::cout << "Now I am in class Shape" << std::endl;
}
