#include <iostream>
#include <string>
using namespace std;

#include "Array.h"

Array::Array() 
{ 
  size = 0;
}

int    Array::getSize()        { return size; }
Recipe Array::getRecipe(int i) { return recipes[i]; }


void Array::add(Recipe* recipe)
{
  if (size == MAX_RECIPES)
    return;

  recipes[size] = *recipe;
  size++;
}

