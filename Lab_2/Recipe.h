#pragma once
#include <iostream>
#include<array> 
#include <fstream>
#include "Ingrid.h"
using namespace std;
class Recipe {        
private:
    Ingredient ingrid;

public:
    Recipe();

    float calculateProductCost(Ingredient product[], int size);
    
    void writeRecipe(Ingredient product[], int size);
    void readRecipe();

    ~Recipe();
};
