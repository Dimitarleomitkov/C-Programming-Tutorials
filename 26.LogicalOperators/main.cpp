#include <iostream>

using namespace std;

int main()
{
    int age = 23;
    int money = 650;

    // If both are true then run the code in the scope.
    if (age > 21 && money > 500) {
        cout << "You are allowed in." << endl;
    }

    // Even if one test is true, the code would run.
    if (age > 21 || money > 500) {
        cout << "Welcome to sleezy bar." << endl;
    }

    return 0;
}
