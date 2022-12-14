#pragma once
class Calculator
{
protected:
	float rez;
public:
	Calculator(){}
	~Calculator(){}
	virtual float Add() = 0;
	virtual float Sub() = 0;
	virtual float Div() = 0;
	virtual float Mult() = 0;
};

class Rez: public Calculator
{
	float a;
	float b;
public:
	Rez(float rA, float rB)
	{
		a = rA;
		b = rB;
	}
	~Rez() {}

	virtual float Add() {
		rez = a + b;
		return rez;
	}
	virtual float Sub() {
		rez = a - b;
		return rez;
	}
	virtual float Div() {
		rez = a / b;
		return rez;
	}
	virtual float Mult() {
		rez = a * b;
		return rez;
	}
};
