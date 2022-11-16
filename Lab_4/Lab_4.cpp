#include "windows.h"
#include "Circle.h"
#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double tempSide, tempRadius;

	Diamond diamond;
	Circle circle;

	ofstream file;

	cout << "Введіть сторону ромба: ";
	cin >> tempSide;
	cout << "Введіть радіус вписаного кола: ";
	cin >> tempRadius;

	diamond.setRadius(tempRadius);
	diamond.setSide(tempSide);
	diamond.calcArea(diamond.getSide(), diamond.getRadius());
	double* Diamond = diamond.getDiamond();

	file.open("lab4.txt");

	cout << "Сторона: " << Diamond[0] << endl;
	file << "Сторона: " << Diamond[0] << endl;
	cout << "Радіус вписанного кола: " << Diamond[1] << endl;
	file << "Радіус вписанного кола: " << Diamond[1] << endl;
	cout << "Площа ромба: " << Diamond[2] << endl;
	file << "Площа ромба: " << Diamond[2] << endl;

	circle.setRadius(tempRadius);
	circle.calcArea(circle.getRadius());
	circle.calcLength(circle.getRadius());
	double* Circle = circle.getCircle();

	cout << endl << "Радіус: " << Circle[0] << endl;
	file << endl << "Радіус: " << Circle[0] << endl;
	cout << "Площа кола: " << Circle[1] << endl;
	file << "Площа кола: " << Circle[1] << endl;
	cout << "Довжина кола: " << Circle[2] << endl;
	file << "Довжина кола: " << Circle[2] << endl;

	cout << "----------------------------------------------------------" << endl;
	file << "----------------------------------------------------------" << endl;

	cout << "Данні з класів: " << endl;
	file << "Данні з класів: " << endl;

	cout << endl << diamond << endl;
	file << endl << diamond << endl;

	cout << circle;
	file << circle;

	file.close();
}
