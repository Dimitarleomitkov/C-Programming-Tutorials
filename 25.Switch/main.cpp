#include <iostream>

using namespace std;

int main()
{
    int age = 21;

    // Switches are faster than if statements, but act similarly
    switch (age) {
        case 16:
            cout << "You can drive now!" << endl;
            break;
        case 18:
            cout << "zdr kopr?" << endl;
            break;
        case 21:
            cout << "'Merica buy me a beer!" << endl;
            break;
        default:
            cout << "Happy Birthday!" << endl;
            // no need for a break here
    }

    return 0;
}
