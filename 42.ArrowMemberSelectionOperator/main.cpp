#include <iostream>
#include "Food.h"

using namespace std;

int main()
{
    Food new_food;

    // We can access things in the object with the "." operator
    new_food.printStuff ();

    Food *point_food = &new_food;

    // We can access things in a pointer to an object with the "->" operator
    point_food->printStuff ();
    // This could also be written as
    (*point_food).printStuff ();

    return 0;
}
