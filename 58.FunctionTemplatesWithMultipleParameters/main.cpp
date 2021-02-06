#include <iostream>

using namespace std;

// We can have  two template types
template <class FIRST, class SECOND>
FIRST smaller (FIRST num1, SECOND num2);

int main()
{
    int intNum1 = 89;
    double doubleNum1 = 56.78;

    // For better result, pass the double first
    cout << smaller (doubleNum1, intNum1);

    return 0;
}

template <class FIRST, class SECOND>
FIRST smaller (FIRST num1, SECOND num2)
{
    // I refuse to use the stupid a<b?a:b !
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}
