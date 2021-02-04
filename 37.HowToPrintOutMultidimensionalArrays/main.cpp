#include <iostream>

using namespace std;

int main()
{
    int multy_array[2][3] = {{2, 3, 4},
                             {8, 9, 10}};

    /* Let's try and print it. It should look like this
       2, 3, 4,
       8, 9, 10,*/
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << multy_array[i][j] << ", ";
        }
        cout << endl;
    }
    // Instead of "i" and "j", "row" and "column" can be used, respectively.

    return 0;
}
