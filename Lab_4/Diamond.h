#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

class Diamond : public Shape
{
private:
	double Side, Radius;

public:
	Diamond();
	void setSide(double tSide);
	void setRadius(double tRadius);
	void calcArea(double tSide, double tHeight);
	double getSide();
	double getRadius();
	double* getDiamond();

	friend ostream& operator <<(ostream& os, const Diamond& diamond)
	{
		os << "Довжина сторони: " << diamond.Side << endl;
		os << "Радіус вписанного кола: " << diamond.Radius << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Diamond& diamond)
	{
		cout << "Введіть сторону ромба: ";
		while (!(is >> diamond.Side) || diamond.Side <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "Сторона має бути > 0" << endl;
			cout << "Введіть сторону ромба: ";
		}
	}

	~Diamond() {}

};
