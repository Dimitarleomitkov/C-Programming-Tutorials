#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float amount;
    float principle = 10000;
    float rate = 0.03;

    for (int day = 1; day <= 30; ++day) {
        amount = principle * pow (1 + rate, day);
        cout << day << " --- " << amount << endl;
    }

    // Now go invest in GameStop and Bitcoin!

    return 0;
}
