#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
	double Area, Length;

public:
	Shape();
	void setArea(double tArea);
	void setLength(double tLength);
	double getArea();
	double getLength();

	friend ostream& operator << (ostream& os, const Shape& shape)
	{
		os << "�����: " << shape.Area << endl;
		os << "�������: " << shape.Length << endl;
		return os;
	}
	~Shape() {}

};
