#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle(Color c);
	Circle(const Shape& a);
	Circle();
	virtual ~Circle();
	virtual void WhereAmI();
};

