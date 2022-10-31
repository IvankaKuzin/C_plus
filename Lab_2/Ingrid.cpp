#include <iostream>
#include<array> 
#include <fstream>
#include "Ingrid.h"
using namespace std;

Ingredient::Ingredient(){}

Ingredient::Ingredient(int price, string name, float dosage) {      
    productPrice = price;
    productName = name;
    productDosage = dosage;
}

void Ingredient::setPrice(int price) {
    productPrice = price;
}
int Ingredient::getPrice() {
    return productPrice;
}

void Ingredient::setName(string name) {
    productName = name;
}
string Ingredient::getName() {
    return productName;
}

void Ingredient::setDosage(float dosage) {
    productDosage = dosage;
}
float Ingredient::getDosage() {
    return productDosage;
}

void Ingredient::show() {
    cout << "Product Name: " << productName << "\n";
    cout << "Product Price: " << productPrice << "\n";
    cout << "Product Dosage: " << productDosage << "\n";
    cout << "----------------------------" << "\n";
}

Ingredient::~Ingredient(){}
