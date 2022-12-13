#pragma once
#include <iostream>
#include <string>
#include "Diamond.h"
#include "Circle.h"
using namespace std;

class Shape: public Diamond, public Circle
{
public:
	Shape(){}
	~Shape() {}
};