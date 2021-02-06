#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main()
{
    // Look into the classes for more information.
    Daughter tina;

    // tina has inherited from the mother, so she can use the function the Mother has
    tina.sayName ();

    return 0;
}
