#pragma once
#include <iostream>
enum Color
{
	UNKNOWN,GREEN, RED, BLUE, WHITE, BLACK
};
class Shape
{
protected:
	Color color;
public:
	Color GetColor();
	Shape(Color c);
	Shape();
	Shape(const Shape& a);
	
	virtual ~Shape();
	virtual void WhereAmI();
};

