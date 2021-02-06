#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main()
{
    Mother mom;
    // The derived class invokes the constructor and destructor of the base class as well as it its own
    Daughter tina;

    return 0;
}
