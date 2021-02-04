#include <iostream>
#include "People.h"

using namespace std;

People::People(string Name, Birthday Date) : name (Name), date (Date)
{
    //ctor
}

void People::printInfo ()
{
    cout << name << " - ";
    // For the date we can use the object "date" inside the People class
    date.printDate ();
}
