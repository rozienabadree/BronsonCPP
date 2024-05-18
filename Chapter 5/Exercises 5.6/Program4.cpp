#include <iostream>
using namespace std;

int main()
{
    const int NUMGENS = 5;
    const int NUMOUTPUTS = 3;
    int i;
    double num1, num2, num3;
    double average;

    for (i = 1; i <= NUMGENS; i++) // for each player
    {
        cout << "\nGenerator " << i << endl;
        cout << "Enter this Generator's three voltages: ";
        cin >> num1 >> num2 >> num3;
        average = (num1 + num2 + num3) / NUMOUTPUTS;
        cout << "Generator " << i << " average: " << average << endl;
    }

    return 0;
}