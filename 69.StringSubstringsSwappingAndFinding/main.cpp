#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1 ("Sir, this is a Wendy's.");

    // Printing out a substring (from 5 to 14)
    cout << string1.substr (5, 9) << endl;

    string string2 ("Apples");
    string string3 ("Oranges");

    cout << "string2:" << string2 << "|string3:" << string3 << endl;
    // swap the strings
    string2.swap (string3);
    cout << "string2:" << string2 << "|string3:" << string3 << endl;

    string string4 ("Bam! Wham! Thank you ma'am!");

    // print the location of the first "am" found
    cout << string4.find ("am") << endl;

    // print the location of the first "am" found from the back
    cout << string4.rfind ("am") << endl;

    return 0;
}
