#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double energy, tempCelsius, tempKelvin;
    const double EMISSIVITY = 1;
    const double STEFAN_BOLTZMANN = 5.6697e-8;

    cout << "Enter the average surface temperature of the planet: ";
    cin >> tempCelsius;

    tempKelvin = tempCelsius + 273.15;
    energy = EMISSIVITY * STEFAN_BOLTZMANN * pow(tempKelvin, 4);

    cout << "The heat radiated in watts per meters squared is " << energy;

    return 0;
}