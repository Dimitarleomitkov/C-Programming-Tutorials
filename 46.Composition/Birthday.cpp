#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int Day, int Month, int Year) : day(Day), month (Month), year (Year)
{
    //ctor
}

void Birthday::printDate ()
{
    cout << day << "." << month << "." << year << endl;
}
