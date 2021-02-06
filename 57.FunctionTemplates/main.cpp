#include <iostream>

using namespace std;

// Create a generic type of data. I name mine "number" in this case
template <class number>
number addThings (number a, number b);

int main()
{
    int num1 = 7, num2 = 43, num3;
    float num4 = 7.3, num5 = 43.77, num6;

    // Using the function with integers
    num3 = addThings (num1, num2);
    cout << num3 << endl;
    // Using the function with floats
    num6 = addThings (num4, num5);
    cout << num6 << endl;

    return 0;
}

// Now we can pass a type of number to a, the same type of number to b, and the function will return of that type of number
template <class number>
number addThings (number a, number b)
{
    return a + b;
}
