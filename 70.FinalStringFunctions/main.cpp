#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1 ("Hello! This is a string for testing purposes.");

    cout << string1 << endl;
    // Let's erase everything from 9th character on
    string1.erase (8);
    cout << string1 << endl;

    string string2 ("Hello! This is a second string for testing purposes.");

    cout << string2 << endl;
    // Let's replace "testing" (35th character in the string and long 7 characters) with "weird"
    string2.replace (35, 7, "weird");
    cout << string2 << endl;

    string string3 ("Hello! This is a third string for testing purposes.");

    cout << string3 << endl;
    // Let's insert "weird " in front of "testing" (34th position in the string)
    string3.insert (34, "weird ");
    cout << string3 << endl;

    string string4 ("Hello! This is a fourth string for testing purposes.");
    // Start from the first "s"
    int i = string4.find ("s");

    // Let's replace all "s" with "S"
    while (i < string4.length()) {
        string4.replace (i, 1, "S");
        i = string4.find ("s");
    }
    cout << string4 << endl;

    return 0;
}
