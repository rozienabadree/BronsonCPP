#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double frequency, stageOneGain, stageTwoGain, stageThreeGain;

    cout << "Enter the frequency: ";
    cin >> frequency;

    stageOneGain = 23 / pow((2.32 + pow((0.044 * frequency), 2)), 0.5);
    stageTwoGain = 12 / pow((6.72 + pow((0.34 * frequency), 2)), 0.5);
    stageThreeGain = 17 / pow((1.92 + pow((0.45 * frequency), 2)), 0.5);

    cout << "The voltage gain of the amplifier at each stage is " << stageOneGain << " " << stageTwoGain << " " << stageThreeGain;

    return 0;
}