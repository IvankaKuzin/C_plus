#include "RozBook.h"

RozBook::RozBook(int Bpok, string Bdata) {
	pok = Bpok;
	data = Bdata;
}
RozBook::RozBook(int Bpok, int Bday, int Bmon, int Byear) {
	pok = Bpok;
	day = Bday;
	mon = Bmon;
	year = Byear;
}

void RozBook::setPok(int sPok) {
	pok = sPok;
}
void RozBook::setData(string sData) {
	data = sData;
}
void RozBook::setData(int sDay, int sMon, int sYear) { 
	day = sDay; mon = sMon; year = sYear; 
}
int RozBook::getPok() {
	return pok;
}
string RozBook::getData() {
	return data;
}
int RozBook::gData() {
	return day;
	return mon;
	return year;
}

void RozBook::getDani() {
	double sum=pok* price;

	cout << "Pokaznyk: " << pok << endl;
	if (data != "NULL") {
		cout << "Data: " << data << endl;
	}
	else{
		cout<<"Data: "<< day <<"."<< mon<< "."<< year << endl;
	}
	cout << "Suma: " << sum << endl;
	cout << "----------------------------" << endl;
}

void RozBook::SearchData(string Sdata) {
	if (getData() == Sdata) {
		getDani();
	}
}
void RozBook::SearchData(int Sday, int Smon, int Syear) {
	if (gData() == Sday && Smon && Syear) {
		getDani();
	}
}

RozBook::~RozBook() {}