#include "windows.h"
#include "Shape.h"
#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double rad, str1;
    Shape shape;

    cout << "Vvedit radius: " << endl;
    std::cin >> rad;
    cout << "Vvedit storonu diamont: " << endl;
    std::cin >> str1;

    double haid = 2 * rad;

    shape.AreaC(rad);
    shape.Len(rad);
    shape.AreaD(str1, haid);

    ofstream ofile("test.txt", ios::app);
    if (ofile.is_open()) {
        ofile << "Radius circle: " << rad << '\n';
        ofile << "Len storony diamont: " << str1 << '\n';
    }

}