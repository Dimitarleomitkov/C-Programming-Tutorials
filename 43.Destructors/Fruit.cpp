#include "Fruit.h"
#include <iostream>

using namespace std;

Fruit::Fruit()
{
    cout << "Hello from the constructor!" << endl;
}

// Cannot have parameters, cannot return anything, and cannot be overloaded.
Fruit::~Fruit()
{
    cout << "Haha! I am the destructor!" << endl;
}
