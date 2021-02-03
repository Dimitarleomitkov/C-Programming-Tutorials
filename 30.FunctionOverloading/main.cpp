#include <iostream>

using namespace std;

void printNumber (int x);
void printNumber (float x);

int main()
{
    int a = 54;
    float b = 32.4896;

    // This one calls void printNumber (int x)
    printNumber (a);
    // This one calls void printNumber (float x)
    printNumber (b);

    return 0;
}

void printNumber (int x)
{
    cout << "Integer function: " << x << endl;
}

void printNumber (float x)
{
    cout << "Float function: " << x << endl;
}
