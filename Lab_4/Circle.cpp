#define _USE_MATH_DEFINES

#include "Circle.h"
#include <Math.h>

Circle::Circle()
{
	radius = 0;
}

void Circle::setRadius(double tRadius)
{
	radius = tRadius;
}

void Circle::calcArea(double tRadius)
{
	double Area = M_PI * pow(tRadius, 2);
	Circle::setArea(Area);
}

void Circle::calcLength(double tRadius)
{
	double Length = 2 * M_PI * tRadius;
	Circle::setLength(Length);
}

double Circle::getRadius()
{
	return radius;
}


double* Circle::getCircle()
{
	static double dataArray[3];
	dataArray[0] = Circle::getRadius();
	dataArray[1] = Circle::getArea();
	dataArray[2] = Circle::getLength();

	return dataArray;
}
