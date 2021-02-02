#include <iostream>

using namespace std;

int main()
{
    int age;
    int age_total = 0;
    int number_of_people = 0;

    cout << "Enter the first person's age or -1 to quit: ";
    cin >> age;

    // Run the loop until the user terminates it
    while (age != -1) {
        age_total += age;
        ++number_of_people;
        cout << "Enter the next person's age or -1 to quit: ";
        cin >> age;
    }

    // Printing the results
    cout << "Number of people entered: " << number_of_people << endl;
    cout << "Average age is " << age_total / number_of_people << endl;

    return 0;
}
