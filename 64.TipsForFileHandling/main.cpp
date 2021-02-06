#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // We can open the file with the constructor
    ofstream outputFileStream ("BBQ.txt");

    // We can check whether the file is in use. Is open
    if (outputFileStream.is_open ()) {
        cout << "The file is open. No worries!" << endl;
    } else {
        cout << "Something went wrong!" << endl;
    }
    // Proceed with your shenanigans
    outputFileStream << "I love this stuff!" << endl;
    outputFileStream.close ();

    return 0;
}
