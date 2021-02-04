#include <iostream>
#include "Food.h"

using namespace std;

int main()
{
    Food food1 (34);
    // What's 9 + 10!?
    Food food2 (21);
    Food food3;

    // With the overloaded operator we can do this
    food3 = food1 + food2;
    cout << "food3.number = ";
    food3.printStuff ();

    return 0;
}
