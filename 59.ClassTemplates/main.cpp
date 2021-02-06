#include <iostream>
#include "Food.h"
/* When we use templates, you have to write the code and the headers in the same file,
   because the compiler needs to generate the code where it is used in the program.
   We can do either this or include #inlcude "Food.cpp" in main.cpp */
#include "Food.cpp"

using namespace std;

int main()
{
    Food <int>myFood (258, 105);

    cout << myFood.bigger () << endl;

    return 0;
}
