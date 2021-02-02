#include <iostream>

using namespace std;

int main()
{
    int bacon = 1;

    // Cook 100 bacons.
    while (bacon <= 100) {
        cout << "I have cooked " << bacon << " bacons" << endl;
        /* In order to jump out of the loop we need to change the value of bacon.
           We can do that in all kinds of steps and ways.
           Here we do it with 1 each time. */
        ++bacon;
    }

    return 0;
}
