#include <iostream>
// Include the file streams
#include <fstream>

using namespace std;

int main()
{
    // Create an output file stream
    ofstream outputFileStream;

    // Open a file for writing
    outputFileStream.open ("tuna.txt", ios_base::out);
    // Write your string to it
    outputFileStream << "I love tuna and tuna loves me." << endl;
    // Close the file
    outputFileStream.close ();

    return 0;
}
