#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    const float EULER = 2.71828;
    float time, numBacteria;

    cout << "Enter the time in hours: ";
    cin >> time;

    numBacteria = 300000 * exp(-0.032 * time);
    cout << "The number of bacteria after " << time << " hours is " << numBacteria;

    return 0;
}