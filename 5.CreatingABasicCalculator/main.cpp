#include <iostream>

using namespace std;

int main()
{
    // Declaring a variable.
    int a;
    int b;
    int sum;

    // Prompt the user
    cout << "Enter a number: ";
    // Take in information from the user
    cin >> a;
    // Prompt the user
    cout << "Enter the second number: ";
    // Take in information from the user
    cin >> b;

    // Calculate the sum
    sum = a + b;
    // Print out the result
    cout << "The sum is: " << sum << endl;

    return 0;
}
