#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double frequency, numStages, voltageGain;

    cout << "Enter the frequency and number of stages in the amplifier: ";
    cin >> frequency >> numStages;

    voltageGain = pow((275 / (sqrt((23 * 23) +(0.5*pow(frequency, 2))))), numStages);
    cout << "At a frequency of " << setw(5) << frequency << " hertz, the voltage gain is " << setw(5) << int(voltageGain) << endl;

    return 0;
}