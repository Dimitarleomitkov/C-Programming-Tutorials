#include <iostream>
#include <string>

using namespace std;

class Food {
    // Variables should not be public.
    private:
        string name;
    /* Building getters and setters to access our private variables. These functions will be publicly accessible.
       This way we know the user will interact with our variables as intended and will not break everything. */
    public:
        // Creating a constructor. A constructor is a function which is invoked when an object of a class is created.
        Food () {cout << "You created a piece of food!" << endl;}
        /* You can create multiple constructors.
           This one demonstrates that we can use a constructor to initialize the parameters of the object at creation. */
        Food (string Name) {name = Name;}
        string get_name () {return name;}
        void set_name (string Name) {name = Name;}
};

int main()
{
    // As soon as we create fruit1, the constructor of Food will be invoked.
    Food fruit1;

    // Set the name of fruit1
    fruit1.set_name ("Peach");
    // Print out the name we get from get_name ()
    cout << fruit1.get_name () << endl;

    // Using the second constructor.
    Food fruit2 ("Banana");

    // No need to set the name, because the constructor already did it.
    cout << fruit2.get_name () << endl;

    return 0;
}
