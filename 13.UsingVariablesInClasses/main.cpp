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
        string get_name () {return name;}
        void set_name (string Name) {name = Name;}
};

int main()
{
    Food fruit1;

    // Set the name of fruit1
    fruit1.set_name ("Peach");
    // Print out the name we get from get_name ()
    cout << fruit1.get_name () << endl;

    return 0;
}
