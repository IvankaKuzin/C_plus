#define _USE_MATH_DEFINES

#include "Circle.h"
#include <Math.h>

void Circle::AreaC(double r) {
    double area = M_PI * pow(r, 2);
    cout << "Area circle: " << area << endl;
    ofstream ofile("test.txt", ios::app);
    if (ofile.is_open()) {
        ofile << "Area circle: " << area << '\n';
    }
}

void Circle::Len(double r) {
    double len = 2 * M_PI * r;
    cout << "Len circle: " << len << endl;
    ofstream ofile("test.txt", ios::app);
    if (ofile.is_open()) {
        ofile << "Len circle: " << len << '\n';
    }
}
