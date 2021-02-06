#include <iostream>
#include "Fruit.h"
#include "Fruit.cpp"

using namespace std;

int main()
{
    Fruit <int>myFruit1 (7);
    Fruit <double>myFruit2 (3.141526);
    Fruit <char>myFruit3 ('a');

    return 0;
}
