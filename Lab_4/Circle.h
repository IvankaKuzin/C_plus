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
		os << "����� ����: " << circle.radius << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Circle& circle)
	{
		cout << "������ ����� ���������� ����: ";
		while (!(is >> circle.radius) || circle.radius <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "������� ������ ������� ���� > 0" << endl;
			cout << "������ ����� ���������� ����: ";
		}
		return is;
	}

	~Circle() {}

};
