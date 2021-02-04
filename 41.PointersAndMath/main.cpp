#include <iostream>

using namespace std;

int main()
{
    int int_array[5];

    // Just to confirm how big an integer is
    cout << "An int is " << sizeof (int_array[0]) << " bytes on this machine." << endl;

    int *my_pointer0 = &int_array[0];
    int *my_pointer1 = &int_array[1];
    int *my_pointer2 = &int_array[2];

    // We expect the addresses to increase with 1 int size
    cout << "my_pointer0 is at " << my_pointer0 << endl;
    cout << "my_pointer1 is at " << my_pointer1 << endl;
    cout << "my_pointer2 is at " << my_pointer2 << endl;
    cout << endl;
    /* Pointer arithmetic is allowed. The following line will move the pointer 2 addresses forward.
       The addition of 2 does not change a value, but rather to what element the pointer is pointing to.
       For example, if it points to 0x0000, it will now point to 0x0008.
       Essentially, my_pointer0 will now point to the same address my_pointer2 points to. */
    my_pointer0 += 2;
    cout << "my_pointer0 is at " << my_pointer0 << " now." << endl;
    cout << endl;
    // To prove the point let's reduce it by 1
    --my_pointer0;
    cout << "my_pointer0 is at " << my_pointer0 << " now." << endl;
    // Yes, now two pointers point to the same address. This is used in smart pointers. No need to know about this now, though.

    return 0;
}
