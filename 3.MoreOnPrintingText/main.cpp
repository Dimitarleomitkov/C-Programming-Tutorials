#include <iostream>

using namespace std;

int main()
{
    // This is a statement. It ends with a ";"
    cout << "boy I love bacon ";
    // There is no endl, so everything is on the same line.
    cout << "and ham";

    // Clarity prints
    cout << endl << endl;

    cout << "boy I love bacon 2" << endl;
    // There is endl, so "and ham" is on the new line.
    cout << "and ham";

    // Clarity prints
    cout << endl << endl;

    // endl and \n are the same thing
    cout << "boy I love bacon 3\nand ham" << endl;

    // Clarity prints
    cout << endl << endl;

    cout << "Boy\nI\nLove\nBacon!" << endl;

    return 0;
}
