#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double energy, emissivity, tempCelsius, tempKelvin;
    const double STEFAN_BOLTZMANN = 5.6697e-8;

    cout << "Enter the average surface temperature and emissivity of the object: ";
    cin >> tempCelsius >> emissivity;

    tempKelvin = tempCelsius + 273.15;
    energy = emissivity * STEFAN_BOLTZMANN * pow(tempKelvin, 4);

    cout << "The heat radiated in watts per meters squared is " << energy;

    return 0;
}