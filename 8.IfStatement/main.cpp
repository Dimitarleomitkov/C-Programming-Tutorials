#include <iostream>

using namespace std;

int main()
{
    // If a test is true then it executes the code in the scope (the body of the if statement)
    if (5 > 3) {
        cout << "Depresso shot 1!" << endl;
    } else {
        cout << "Test 1 was not met." << endl;
    }

    if (1 > 3) {
        cout << "Depresso shot 2!" << endl;
    } else {
        cout << "Test 2 was not met." << endl;
    }

    if (1 < 3) {
        cout << "Depresso shot 3!" << endl;
    } else {
        cout << "Test 3 was not met." << endl;
    }

    if (3 >= 3) {
        cout << "Depresso shot 4!" << endl;
    } else {
        cout << "Test 4 was not met." << endl;
    }

    if (1 <= 3) {
        cout << "Depresso shot 5!" << endl;
    } else {
        cout << "Test 5 was not met." << endl;
    }

    if (3 == 3) {
        cout << "Depresso shot 6!" << endl;
    } else {
        cout << "Test 6 was not met." << endl;
    }

    if (10 != 8) {
        cout << "Depresso shot 7!" << endl;
    } else {
        cout << "Test 7 was not met." << endl;
    }

    // Naturally, this works with variables.
    int a = 98;
    int b = 76;

    if (a > b) {
        cout << "Depresso shot 8!" << endl;
    } else {
        cout << "Test 8 was not met." << endl;
    }

    // Variables and values can be mixed up.
    if (a > 100) {
        cout << "Depresso shot 9!" << endl;
    } else {
        cout << "Test 9 was not met." << endl;
    }

    return 0;
}
