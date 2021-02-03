#include <iostream>

using namespace std;

int main()
{
    int x = 99;

    // Another loop. This one runs the code at least once.
    do {
        cout << x << endl;
        ++x;
    } while (x < 10);

    return 0;
}
