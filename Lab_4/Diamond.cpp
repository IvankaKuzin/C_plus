#include "Diamond.h"
#include <Math.h>

Diamond::Diamond()
{
	Side = 1;
	Radius = 1;
}

void Diamond::setSide(double tSide)
{
	Side = tSide;
}
void Diamond::setRadius(double tRadius)
{
	Radius = tRadius;
}

void Diamond::calcArea(double Side, double Radius)
{
	double Area;
	Area = 2 * Side * Radius;
	Diamond::setArea(Area);
}

double Diamond::getSide()
{
	return Side;
}
double Diamond::getRadius()
{
	return Radius;
}

double* Diamond::getDiamond()
{
	static double dataArray[3];
	dataArray[0] = Diamond::getSide();
	dataArray[1] = Diamond::getRadius();
	dataArray[2] = Diamond::getArea();

	return dataArray;
}
