#include "Food.h"
#include <iostream>

using namespace std;

Food::Food()
{
    //ctor
}

// Constant functions can be called from all types of objects.
void Food::printingStuff () const
{
    cout << "I print things!" << endl;
}
