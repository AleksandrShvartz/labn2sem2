#include "Rect.h"
Rect::Rect(Color c):Shape(c) {
	std::cout << "Rect created1" << std::endl;
}
Rect::Rect(const Shape& a):Shape(a)
{
	std::cout << "Rect created2" << std::endl;
}
Rect::Rect() : Shape() {
	std::cout << "Rect created0" << std::endl;
}
Rect::~Rect()
{
	std::cout <<"Now I am in Rect's destructor!" << std::endl;
}

void Rect::WhereAmI(){

	std::cout << "Now I am in class Rect" << std::endl;
}
