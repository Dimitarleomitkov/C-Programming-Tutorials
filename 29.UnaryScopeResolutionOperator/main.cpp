#include <iostream>

using namespace std;

void my_func ();

// Global variable can be accessed from everywhere. Hence, this is dangerous.
int tuna = 420;

int main()
{
    // This is the used and preferred variable for main().
    int tuna = 69; // Haha!

    // This is the local tuna - 69
    cout << "main: " << tuna << endl;
    my_func ();
    // If I want to use the global variable while having a local of the same name it is done like so
    cout << "main but global: " << ::tuna << endl;

    return 0;
}

void my_func ()
{
    // This is the global tuna - 420
    cout << "my_func: " << tuna << endl;
    // There can be a third tuna here and it will be preferred in my_func().
}
