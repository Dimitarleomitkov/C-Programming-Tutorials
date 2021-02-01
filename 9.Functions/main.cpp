#include <iostream>

using namespace std;

// Prototype the function - The compiler needs to know this function exists beforehand.
void printingSomething ();

int main()
{
    // Calling the function printingSomething.
    printingSomething ();

    return 0;
}

/* Creating a new function. Starts with a return type (void).
   Void is used when the function does not return anything. Then it is followed by the name (printingSomething).
   Inside the "()" are the parameters the function takes.
   Inside the "{}" is the body of the function (also known as scope).
*/
void printingSomething ()
{
    cout << "This is text from the function." << endl;
}
