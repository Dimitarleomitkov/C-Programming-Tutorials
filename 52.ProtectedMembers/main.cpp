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
    // Make tina do something
    tina.doSomething ();
    /* When printing tina has access to the public variable,
       the protected variable, but not the private variable */
    cout << "tina.publicVar = " << tina.publicVar << endl;
    // To print the protected variable we need a friend function or a getter

    return 0;
}
