#include "Shape.h"

Shape::Shape()
{
	Area = 0;
	Length = 0;
}

void Shape::setArea(double tArea)
{
	Area = tArea;
}

void Shape::setLength(double tLength)
{
	Length = tLength;
}

double Shape::getArea()
{
	return Area;
}

double Shape::getLength()
{
	return Length;
}