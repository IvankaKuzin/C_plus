#pragma once
#include <iostream>
#include<array> 
#include <fstream>

using namespace std;

class Ingredient {

private:
    string productName="--";
    double productDosage=0.0;
    double productPrice=0.0;

public:
    Ingredient();

    Ingredient(int price, string name, float dosage);
    
    void setPrice(int price);
    int getPrice();

    void setName(string name);
    string getName();

    void setDosage(float dosage);
    float getDosage();

    void show();
    void writeRecipe();

    ~Ingredient();
};