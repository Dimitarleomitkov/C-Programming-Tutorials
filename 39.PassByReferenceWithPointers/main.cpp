#include <iostream>

using namespace std;

void passByValue (int x);
// int *x holds the address in the memory of the variable
void passByReference (int *x);

int main()
{
    int misho = 13;

    cout << "misho originally: " << misho << endl;
    passByValue (misho);
    cout << "misho after passByValue: " << misho << endl;
    // You need to pass the address with &misho
    passByReference (&misho);
    cout << "misho after passByReference: " << misho << endl;

    return 0;
}

void passByValue (int x)
{
    // This is a copy so the original variable will not change in the main()
    x = 99;
}

void passByReference (int *x)
{
    // This will change the value of the variable straight inside the address of the variable
    *x = 66;
}
