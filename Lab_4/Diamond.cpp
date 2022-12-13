#include "Diamond.h"
#include <Math.h>

Diamond::Diamond() {}

void Diamond::AreaD(double a, double b)
{
        double area = a * b;
        cout << "Area Diamont: " << area << endl;
        ofstream ofile("test.txt", ios::app);
        if (ofile.is_open()) {
            ofile << "Area Diamont: " << area << '\n';
        }
}

Diamond::~Diamond() {}

