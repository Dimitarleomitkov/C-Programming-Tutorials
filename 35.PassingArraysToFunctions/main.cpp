#include <iostream>

using namespace std;

void printArray (int theArray[], int length);

int main()
{
    int my_array[3] = {5, 8, 111};
    int second_array[6] = {54, 24, 7, 8, 9, 99};

    // Call the function to print the array
    printArray (my_array, 3);
    // Then one can pass another array and it still works
    printArray (second_array, 6);

    return 0;
}

void printArray (int theArray[], int length)
{
    for (int i = 0; i < length; ++i) {
        cout << "Element " << i << " holds the value of " << theArray[i] << endl;
    }
    cout << endl;
}
