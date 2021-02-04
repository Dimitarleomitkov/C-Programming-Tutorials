#include <iostream>

using namespace std;

int main()
{
    // An element of an array is an array itself. One can think of them as rows and columns.
    int multy_array[2][3] = {{2, 3, 4},
                             {8, 9, 10}}; // 2 rows and 3 columns if you will

    // You can grab an element like so
    cout << multy_array[1][1]; // This should print 9

    return 0;
}
