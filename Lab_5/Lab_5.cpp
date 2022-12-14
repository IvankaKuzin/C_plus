#include <iostream>
#include <fstream>
#include "Сalculator.h"

using namespace std;

int main()
{
	Calculator* calculator;
	Rez a(5.7, 10.2);
	calculator = &a;
	std::cout << "Rezult add: " << calculator->Add() << std::endl;
	std::cout << "Rezult sub: " << calculator->Sub() << std::endl;
	std::cout << "Rezult div: " << calculator->Div() << std::endl;
	std::cout << "Rezult mult: " << calculator->Mult() << std::endl;

}

