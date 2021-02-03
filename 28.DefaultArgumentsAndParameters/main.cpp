#include <iostream>

using namespace std;

// Setting the defaults to 1
int volume (int length = 1, int width = 1, int height = 1);

int main()
{
    // length = 3, width = 4, height = 1
    cout << volume (3, 4) << endl;
    // length = 3, width = 5, height = 1
    cout << volume (3, 5) << endl;
    // length = 4, width = 5, height = 1
    cout << volume (4, 5) << endl;
    // length = 3, width = 1, height = 1
    cout << volume (3) << endl;
    // length = 3, width = 4, height = 5
    cout << volume (3, 4, 5) << endl;

    return 0;
}

int volume (int length, int width, int height)
{
    return length * width * height;
}
