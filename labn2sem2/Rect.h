#pragma once
#include "Shape.h"
class Rect :
	public Shape
{
public:
	Rect( Color c);
	Rect(const Shape& a);
	virtual ~Rect();
	Rect();
	virtual void WhereAmI();
};

