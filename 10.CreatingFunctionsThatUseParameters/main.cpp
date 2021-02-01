#include <iostream>

using namespace std;

// printFavNum takes a variable of the type integer and stores it into the local variable "num".
void printFavNum (int num);

int main()
{
    printFavNum (5);

    return 0;
}

void printFavNum (int num)
{
    // Note: "num" here is a copy of 5. The original 5 is in the main.
    cout << "My favourite number is " << num << endl;
    // After this line the copy is destroyed, when the program jumps out of the function.
}
