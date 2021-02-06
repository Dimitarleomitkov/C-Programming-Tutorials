#include <iostream>

using namespace std;

int main()
{
   try {
        int num1;

        cout << "Enter first number: ";
        cin >> num1;

        int num2;

        cout << "Enter second number: ";
        cin >> num2;

        if (num2 == 0) {
            throw 0;
        }

        cout << num1 / num2 << endl;
   } catch (int secondNumber) {
        cout << "You can't divide by " << secondNumber << endl;
        // We can have multiple catch
   } catch (...) {
        // We are catching the rest of the error messages here
        cout << "Something went wrong!" << endl;
   }

    return 0;
}
