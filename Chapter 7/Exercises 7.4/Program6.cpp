#include <iostream>
using namespace std;

const int NUMVALS = 10;

int main()
{
    void calc_volts(double[], double[], double[]); // function protoype

    double current[NUMVALS] = {10.62, 14.89, 13.21,16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double resistance[NUMVALS] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    double volts[NUMVALS];

    calc_volts(current, resistance, volts);

    return 0;
}

void calc_volts(double current[NUMVALS], double resistance[NUMVALS], double voltage[NUMVALS])
{
    int i;

    for (i = 0; i < NUMVALS; i++)
    {
        voltage[i] = current[i] * resistance[i];
        cout << "Current is " << current[i] << " Resistance is " 
             << resistance[i] << " and voltage is " << voltage[i] << endl;
    }

    return;
}