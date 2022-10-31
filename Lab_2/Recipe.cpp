#include <iostream>
#include <array> 
#include <fstream>
#include "Recipe.h"
using namespace std;

Recipe::Recipe(){}

float Recipe::calculateProductCost(Ingredient product[], int size) {
    int cost = 0;

    for (int i = 0; i < size; i++) {
        cost += product[i].getPrice() * product[i].getDosage();
    }

    return cost;
}

void Recipe::writeRecipe(Ingredient product[], int size) {
    ofstream RecipeFile("recipe.txt");
    for (int i = 0; i < size; i++) {
        RecipeFile <<"Name product: " << product[i].getName() << "; ";
        RecipeFile <<"Dosage: " << product[i].getDosage() << "; ";
        RecipeFile << "Price: " << product[i].getPrice() << ";\n";
    }
    RecipeFile.close();
}

void Recipe::readRecipe() {
    ifstream file("recipe.txt");
        int n =300;
        char* buffer = new char[n + 1]; buffer[n] = 0;
        file.read(buffer, n);
        cout << buffer;
    delete[] buffer;
    file.close();
}

Recipe::~Recipe(){}