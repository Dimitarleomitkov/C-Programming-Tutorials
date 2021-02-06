#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream theFile ("players.txt");

    // Close if it is not open
    if (!theFile.is_open ()) {
        cout << "Something went wrong!" << endl;
        return -1;
    }

    cout << "Enter player's ID, Name and Money" << endl;
    cout << "press Ctrl+Z (EOF) to quit" << endl;

    int idNumber;
    string name;
    double money;

    while (cin >> idNumber >> name >> money) {
        // Structure the data here
        theFile << idNumber << " " << name << " " << money << endl;
    }

    return 0;
}
