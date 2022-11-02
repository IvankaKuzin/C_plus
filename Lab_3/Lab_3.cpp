#include <iostream>
#include "RozBook.h"
#include <fstream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	RozBook pokaz1(183, "01.11.2022");
	RozBook pokaz2(125, 03,04,2022);
	RozBook pokaz3(173,02,12,2018);
	RozBook pokaz4(97, "28.07.2022");
	RozBook pokaz5(73, 16,02,2022);

	RozBook pokazy[] = { pokaz1,pokaz2,pokaz3,pokaz4,pokaz5};

	for (int i = 0; i < size(pokazy); i++) {
			pokazy[i].getDani();
	}

	cout << "Збільшення показників на 1:" << endl;
	cout << "Введіть номер показника:" << endl;
	int i;
	cin >> i;
	++pokazy[i];
	pokazy[i].getDani();

	cout << "Зменшення показників на число " << endl;
	cout << "Введіть число зменшення:" << endl;
	int n;
	cin >> n;
	cout << "Введіть номер показника:" << endl;
	int j;
	cin >> j;
	pokazy[j] -= n;
	pokazy[j].getDani();

	cout << "Пошук показів за датою: " << endl;
	for (int i = 0; i < size(pokazy); i++) {
		pokazy[i].SearchData(16,02,2022);
	}
}
