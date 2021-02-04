#include <iostream>

using namespace std;

int main()
{
    int my_arr[9];

    // Store values withing the array using a loo
    for (int i = 0; i < 9; ++i) {
        my_arr[i] = i*5;
    }

    // Visualize it
    cout << "Element - Value" << endl;
    for (int i = 0; i < 9; ++i) {
        cout << "my_arr[" << i << "] - " << my_arr[i] << endl;
    }

    return 0;
}
