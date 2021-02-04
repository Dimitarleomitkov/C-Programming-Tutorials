#include <iostream>

using namespace std;

int main()
{
    // Arrays store multiple values. Like a chain of variables
    // For example, this array holds 5 integers - 66, 75, 2, 43 and 99, in that order
    int my_array[5] = {66, 75, 2, 43, 99};

    // Let's print it out
    for (int i = 0; i < 5; ++i) {
        cout << "my_array[" << i + 1 << "]: " << my_array[i] << endl;
    }

    // You can index every element individually. Remember it starts to count from 0
    // Make the first element 10
    my_array[0] = 10;
    // Make the third element 33
    my_array[2] = 33;

    // Print it again
    cout << endl << "New array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "my_array[" << i + 1 << "]: " << my_array[i] << endl;
    }

    return 0;
}
