#pragma once
#include <iostream>
#include "Diamond.h"
using namespace std;

class Circle : public Diamond
{
private:
	double radius;

public:
	Circle();
	void setRadius(double tRadius);
	void calcArea(double tRadius);
	void calcLength(double tRadius);
	double getRadius();
	double* getCircle();

	friend ostream& operator <<(ostream& os, const Circle& circle)
	{
		os << "Радіус кола: " << circle.radius << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Circle& circle)
	{
		cout << "Введіть радіус вписанного кола: ";
		while (!(is >> circle.radius) || circle.radius <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "Довжина радіуса повинна бути > 0" << endl;
			cout << "Введіть радіус вписанного кола: ";
		}
		return is;
	}

	~Circle() {}

};
