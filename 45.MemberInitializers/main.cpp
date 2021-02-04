#include <iostream>
#include "Food.h"

using namespace std;

int main()
{
    Food my_food (3, 5); // The magic happens in the constructor

    my_food.printStuff ();

    return 0;
}
