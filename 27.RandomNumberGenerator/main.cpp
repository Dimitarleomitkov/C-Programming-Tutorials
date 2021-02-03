#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Rand gives you a random number but it is not too random. For example, these are the same "random" numbers every time.
    for (int i = 0; i < 25; ++i) {
        cout << (rand() % 6) + 1 << endl; // Throwing dice
    }

    // To make it more random we need to "seed" it. It is done like this
    srand (time (0)); // By randomizing it with the time it is rolling different each time.
    cout << "More random numbers:" << endl;
    for (int i = 0; i < 25; ++i) {
        cout << (rand() % 6) + 1 << endl; // Throwing dice
    }

    return 0;
}
