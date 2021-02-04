#include "Food.h"
#include <iostream>

using namespace std;

Food::Food()
{
    //ctor
}

Food::Food (int Number) :  number (Number)
{

}

Food Food::operator+ (Food second_food)
{
    // Create a new piece of food for a placeholder object
    Food placeholderFood;

    // This is what the operator "+" does for our class now
    placeholderFood.number = this->number + second_food.number;

    // Return the result object
    return placeholderFood;
}

void Food::printStuff ()
{
    cout << number << endl;
}
