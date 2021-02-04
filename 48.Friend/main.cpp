#include <iostream>
#include "Food.h"

using namespace std;

int main()
{
    Food my_food;

    // This should now have access to the class, change the var and print 99
    foodFriend (my_food);

    return 0;
}

// This function will be a friend of the class Food
void foodFriend (Food &foodObject)
{
    foodObject.foodVar = 99;
    cout << foodObject.foodVar << endl;
}
