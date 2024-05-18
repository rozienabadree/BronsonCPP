#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int resistance[SIZE] = {16, 27, 39, 56, 81};
    int i, current[SIZE];
    double power[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        cout << "Enter a current: ";
        cin >> current[i];
        power[i] = resistance[i] * pow(current[i], 2);
    }

    cout << "Resistance \t Current \t Power\n"
         << "--------------------------------------------\n";
    for (i = 0; i < SIZE; i++)
        cout << resistance[i] << "\t\t" << current[i] << "\t\t" << power[i] << "\n";
    
    return 0;
}