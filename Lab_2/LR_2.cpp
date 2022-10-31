#include <iostream>
#include<array> 
#include <fstream>
#include "Ingrid.h"
#include "Recipe.h"
using namespace std;

int main()
{
    string recipe = "For soup, you need potatoes, carrots and onions";
    
    Ingredient potato(10, "Potato", 1);
    Ingredient carrot(10, "Carrot", 0.7);
    Ingredient onion(10, "Onion", 0.3);

    potato.show();
    carrot.show();
    onion.show();
    
    Recipe soup;
    
    Ingredient ingredients[3] = {potato,carrot,onion };
    soup.writeRecipe(ingredients, 3);

    float cost = soup.calculateProductCost(ingredients, 3);
    cout << "\n" << "Product Cost: " << cost << "\n";

    cout << "\n" << "Read in the fail: " << "\n";
    soup.readRecipe();

    return 0;
}

