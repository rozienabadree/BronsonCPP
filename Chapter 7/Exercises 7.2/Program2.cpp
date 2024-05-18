#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    double volts[SIZE] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
    int i;

    for (i = 0; i < SIZE; i++)
        cout << volts[i] << endl;

    return 0;
}