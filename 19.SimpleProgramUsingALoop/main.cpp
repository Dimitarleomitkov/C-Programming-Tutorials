#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int number;
    int sum = 0;

    while (x <= 5) {
        cout << "Enter a number: ";
        cin >> number;
        // Add the new number to the sum

        sum += number;
        ++x;
    }
    // Print out the sum
    cout << "The sum is " << sum << endl;

    return 0;
}
