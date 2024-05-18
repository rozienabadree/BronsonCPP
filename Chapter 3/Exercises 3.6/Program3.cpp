#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float mmA, rateEffusion;
    const float mmB = 14.01;

    cout << "Enter the molar mass of the first gas: ";
    cin >> mmA;

    rateEffusion = sqrt(mmB / mmA);

    cout << "The rate of effusion is: " << rateEffusion;

    return 0;
}