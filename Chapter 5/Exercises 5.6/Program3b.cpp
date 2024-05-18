#include <iostream>
using namespace std;

int main()
{
    const int NUMGENS = 5;
    const int NUMOUTPUTS = 3;
    int i, j;
    double num, total, totGen = 0;
    double average;

    for (i = 1; i <= NUMGENS; i++) // for each player
    {
        total = 0; // clear the total for this player
        cout << "\nGenerator " << i << endl;
        for (j = 1; j <= NUMOUTPUTS; j++) // for each game
        {
            cout << "Enter output " << j << " voltage: ";
            cin >> num;
            total = num + total;
        }
        average = total / NUMOUTPUTS;
        totGen = totGen + average;
        cout << "Generator " << i << " average: " << average << endl;
    }

    average = totGen / NUMGENS;
    cout << "\nThe average generator voltage is: " << average << endl;

    return 0;
}