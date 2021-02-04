#include <iostream>

using namespace std;

int main()
{
    int tuna[5] = {20, 54, 76, 832, 546};
    int sum = 0;

    // Sum up every element of the array
    for (int i = 0; i < 5; ++i) {
        sum += tuna[i];
    }

    //Visualize the result
    cout << "The sum of the array is: " << sum << endl;

    return 0;
}
