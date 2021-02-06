#include "Fruit.h"
#include <iostream>

using namespace std;

template <class Type>
Fruit<Type>::Fruit(Type something)
{
    cout << something << " is not a character." << endl;
}

Fruit<char>::Fruit(char something)
{
    cout << something << " is a character." << endl;
}
