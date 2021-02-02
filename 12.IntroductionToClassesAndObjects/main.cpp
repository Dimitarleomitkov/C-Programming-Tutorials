#include <iostream>

using namespace std;

// Declaring a class
class Food {
    // "public" can be used outside of the specifier
    public:
        // Create a function in the class
        void coolSaying () {cout << "Zip it up! And zip it out!" << endl;}
};

int main()
{
    // Create an object
    Food ghetto_food;

    /* Use the function from the class. These functions are specific to the class
       and different classes can have functions with the same name. They are differentiated by
       calling them from a different class - tied together. */
    ghetto_food.coolSaying ();

    return 0;
}
