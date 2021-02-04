#include <iostream>
#include "Food.h"

using namespace std;

// Initializing of all the members happens here, after the bracket with the weird syntax
Food::Food(int RegVar, int constVar) : regularVariable (RegVar), constantVariable (constVar)
{

}

void Food::printStuff ()
{
    cout << "regular variable is: " << regularVariable << endl;
    cout << "constant variable is: " << constantVariable << endl;
}
