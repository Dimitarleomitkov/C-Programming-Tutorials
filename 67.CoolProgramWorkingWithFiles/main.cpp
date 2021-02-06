#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int getOption ();
void displayItems (int);

int main()
{
    int userOption;

    srand (time (0));

    do {
        // Get the menu choice from the user
        userOption = getOption ();
        // Display the respective items from the list
        displayItems (userOption);
    } while (userOption != 4);

    return 0;
}

int getOption ()
{
    int choice;

    cout << "1 - Just plain items" << endl;
    cout << "2 - Helpful items" << endl;
    cout << "3 - Harmful items" << endl;
    cout << "4 - Quit" << endl;
    cout << endl;
    cin >> choice;

    // Check if the input is a valid digit
    if (choice < 1 || choice > 4) {
        cout << choice << "? You think you are smart, huh!? Your input is now randomized!" << endl;
        choice = (rand () % 4) + 1;
        cout << choice << endl;
        // Clear before, rather than after, so the stream is put into a good state where it can operate on its buffer.
        cin.clear ();
        /*  This tells the code to ignore ALL characters until the amount specified.
            It will ignore essentially until EOF (because std::numeric_limits<std::streamsize>::max() is huge).
            If you just want to ignore a single line, you need to specify an extra parameter of '\n',
            to tell it you only want to ignore up to the end of the line.*/
        cin.ignore (INT_MAX, '\n');
    }

    return choice;
}

void displayItems (int UserOption)
{
    ifstream objectsFile ("objects.txt");
    string objectName;
    double objectPower;

    switch (UserOption) {
        case 1:
            // Read through the file line by line
            while (objectsFile >> objectName >> objectPower) {
                // Plain items have a power of 0
                if (objectPower == 0) {
                    cout << objectName << " " << objectPower << endl;
                }
            }
            break;
        case 2:
            // Read through the file line by line
            while (objectsFile >> objectName >> objectPower) {
                // Helpful items have a positive power
                if (objectPower > 0) {
                    cout << objectName << " " << objectPower << endl;
                }
            }
            break;
        case 3:
            // Read through the file line by line
            while (objectsFile >> objectName >> objectPower) {
                // Harmful items have a negative power
                if (objectPower < 0) {
                    cout << objectName << " " << objectPower << endl;
                }
            }
            break;
        case 4:
            cout << "Bye, bye!" << endl;
            break;
        default:
            cout << "Wrong input!" << endl;
            break;
    }

    objectsFile.close ();
    cout << endl;
}
