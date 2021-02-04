#include <iostream>

using namespace std;

int factorial (int x);

int main()
{
    cout << factorial (5);

    return 0;
}

int factorial (int x)
{
    // This is the base case - terminating requirement of the recursion.
    if (x == 1) {
        return 1;
    }
    // Factorial calculation
    x = x * factorial (x - 1);
}
