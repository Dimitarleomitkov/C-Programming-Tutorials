#include <iostream>

using namespace std;

int main()
{
    int age = 24;

    // If statements can have an else, which will execute if the rest fails.
    if (age > 60) {
        cout << "You are old. Retire." << endl;
        // You can put if statements inside if statements.
        if (age > 100) {
            cout << "Really old! Tell us a story!" << endl;
        }
    } else if (age == 27) {
        cout << "Prime age!" << endl;
    } else {
        cout << "You are young. Get a job." << endl;
    }

    return 0;
}
