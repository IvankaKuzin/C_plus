#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class RozBook
{
private:
	double price=1.44;
	int pok;
	string data ="NULL";
	int day, mon, year;
	double sum;

public:
	RozBook(int Bpok, string Bdata);
	RozBook(int Bpok, int Bday,int Bmon, int Byear);

	void setPok(int sPok);
	void setData(string sData);
	void setData(int day, int mon, int year);
	int getPok();
	string getData();
	int gData();

	void getDani();
	void SearchData(string Sdata);
	void SearchData(int Sday, int Smon, int Syear);

	RozBook operator++(void) {
		pok++;
		return *this;
	}
	RozBook operator-=(int temp) {
		pok = pok - temp;
		return *this;
	}

	~RozBook();
};

