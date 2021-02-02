#include <iostream>

using namespace std;

// The function addNumbers needs two parameters. The values will be copied into x and y respectively.
int addNumbers (int x, int y);

int main()
{
    // Print out the returned value from the function
    cout << addNumbers (43, 86) << endl;

    return 0;
}

int addNumbers (int x, int y)
{
    int answer = x + y;

    return answer;
    // We can also write return x + y; This will save up on using useless memory.
}
