#include <iostream>
#include "RecipeManager.h"

using namespace std;

RecipeManager::RecipeManager()
{

}

void RecipeManager::launch()
{
  string str;
  int    choice;

  while (1) {
    choice = -1;
    view.mainMenu(&choice);
    if (choice == 0) {
      break;
    }
    else if (choice == 1) {
      Recipe newRecipe;
      view.getRecipeData(&newRecipe);
      recipeArr.add(&newRecipe);
    }
    else if (choice == 2) {
      view.printRecipes(&recipeArr);
    }
    view.pause();
  }
}

