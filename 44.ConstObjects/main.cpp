#include <iostream>
#include "Food.h"

using namespace std;

int main()
{
    // const will not let us change the value later on
    const int x = 3;

    /* For example x = 5; will give us an error.
       Otherwise, everything else is fine. Can read it, cannot write to it.
       Read only variable */
    cout << x << endl;

    const Food my_food;
    Food food2;

    // In order to use functions of a const object, the function needs to be const itself.
    my_food.printingStuff ();
    food2.printingStuff();

    return 0;
}
