#include <iostream>

using namespace std;

int main()
{
    char c;
    int i;
    float f;
    double d;

    // Determines the size in bytes
    cout << "A char is " << sizeof (c) << " byte." << endl;
    cout << "A int is " << sizeof (i) << " bytes." << endl;
    cout << "A float is " << sizeof (f) << " bytes." << endl;
    cout << "A double is " << sizeof (d) << " bytes." << endl;

    // Let's see how it works with an array
    double dbl_array[10];

    cout << "dbl_array is " << sizeof (dbl_array) << " bytes." << endl;
    // This can be used to find out how many elements an array has
    cout << "dbl_array has " << sizeof (dbl_array) / sizeof (dbl_array[0]) << " elements." << endl;

    return 0;
}
