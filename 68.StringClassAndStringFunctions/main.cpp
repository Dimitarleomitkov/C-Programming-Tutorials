#include <iostream>
// Getting all the string functions
#include <string>

using namespace std;

int main()
{
    string string1;

    cout << "Enter a string: ";
    // cin ends the input at the first space, or a new line character, or a tab
    cin >> string1;
    cout << "The string you entered is: " << string1 << endl;

    // Clear before, rather than after, so the stream is put into a good state where it can operate on its buffer.
    cin.clear ();
    /*  This tells the code to ignore ALL characters until the amount specified.
        It will ignore essentially until EOF (because std::numeric_limits<std::streamsize>::max() is huge).
        If you just want to ignore a single line, you need to specify an extra parameter of '\n',
        to tell it you only want to ignore up to the end of the line.*/
    cin.ignore (INT_MAX, '\n');
    // Let's read a whole line

    string string2;

    cout << "Enter a string: ";
    // cin ends the input at the first space, or a new line character, or a tab
    getline (cin, string2);
    cout << "The string you entered is: " << string2 << endl;

    // Strings have a constructor
    string string3 ("Hamster");
    // This is a blank string
    string string4;
    string string5;

    // Copy a string
    string4 = string3;

    // We can copy as well with assign()
    string5.assign (string3);

    cout << string3 << " " << string4 << " " << string5 << endl;

    // Strings are an array of characters
    string string6 = "watermelon";

    // Printing out the 3rd character
    cout << string6[2];
    cout << "/";
    // Or by using the at function
    cout << string6.at (2) << endl;

    // Finally, a string can be print as an array
    for (int i = 0; i < string6.length (); ++i) {
        cout << string6[i];
    }
    cout << endl;

    // Or with my favourite method (because of the terminating '\0')
    int j = 0;

    while (string6[j]) {
        cout << string6[j++];
    }
    cout << endl;

    return 0;
}
