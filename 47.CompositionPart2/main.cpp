#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday birthDate (18, 6, 1990);
    // A Birthday object is needed for the initialization of a person
    People person1 ("Misho", birthDate);

    person1.printInfo ();

    return 0;
}
