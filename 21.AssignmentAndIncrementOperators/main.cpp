#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    cout << "x = " << x << endl;

    // Assigning the value as soon as the arithmetic is done
    x += 10;
    cout << "x += 10 : " << x << endl;
    x -= 5;
    cout << "x -= 5 : " << x << endl;
    x *= 5;
    cout << "x *= 5 : " << x << endl;
    x /= 5;
    cout << "x /= 5 : " << x << endl;
    x %= 2;
    cout << "x %= 2 : " << x << endl;

    // ++x and x++
    // Prints out x and then increments with 1
    cout << "x++ : " << x++ << endl;
    // Increments with 1 and then prints out x
    cout << "++x : " << ++x << endl;

    // there is also --x and x-- The same thing as the +
    cout << "x-- : " << x-- << endl;
    cout << "--x : " << --x << endl;

    return 0;
}
