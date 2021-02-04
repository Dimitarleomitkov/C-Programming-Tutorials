#include <iostream>

using namespace std;

int main()
{
    int fish = 5;

    // Let's print the address where the value of fish is stored
    cout << "Memory address of our int variable: " << &fish << endl;

    // This is how we create a pointer to an integer
    int *pointer_to_int;

    // The value of a pointer is a memory address
    pointer_to_int = &fish;

    // Now our pointer points to the memory address of fish, which is an integer.
    cout << "Memory address stored in the pointer: " << pointer_to_int << endl;
    // We can also access the value stored in that memory address
    cout << "The value in that address: " << *pointer_to_int << endl;

    return 0;
}
