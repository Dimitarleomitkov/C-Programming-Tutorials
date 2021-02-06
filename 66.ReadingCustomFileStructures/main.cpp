#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Input file stream
    ifstream inputFileStream ("players.txt");

    int id;
    string name;
    double money;

    // Read until the end of file - EOF. It is a NULL pointer so the loop will be broken
    while (inputFileStream >> id >> name >> money) {
        // Do something with the data
        cout << id << ", " << name << ", " << money << endl;
        // This while loop only works because we know the file's structure
    }

    inputFileStream.close ();

    return 0;
}
