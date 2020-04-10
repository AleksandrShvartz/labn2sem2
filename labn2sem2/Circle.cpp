#include "Circle.h"

Circle::Circle(Color c):Shape(c)
{
	std::cout << "Cicle created1" <<std::endl;
}

Circle::Circle():Shape()
{

	std::cout << "Cicle created0" << std::endl;
}
Circle::Circle(const Shape& a) : Shape(a)
{

	std::cout << "Cicle created2" << std::endl;
}
Circle::~Circle()
{
		std::cout << "Now I am in Circle's destructor!" << std::endl;
}

void Circle::WhereAmI()
{
	std::cout << "Now I am in class Circle" << std::endl;
}
