#include <iostream>

using namespace std;

int main()
{
    // An exception is basically a run time error, which has to be handled
    try {
        int momAge = 50;
        int sonAge = 34;

        // This is impossible so we can test it and throw an exception
        if (sonAge > momAge) {
            throw 99;
        }
    } catch (int errorCode) {
        // The user has done something, they shouldn't have
        cout << "Son cannot be older than mom. ERROR NUMBER: " << errorCode << endl;
    }

    return 0;
}
