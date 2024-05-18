#include <iostream>
using namespace std;

int main()
{
    const int MAXNUMS = 8;
    int i, temp[MAXNUMS], total = 0;
    double avg;

    for (i = 0; i < MAXNUMS; i++) // Enter the numbers
    {
        cout << "Enter an integer number: ";
        cin >> temp[i];
    }
    cout << "\nThe average of the numbers ";

    for (i = 0; i < MAXNUMS; i++) // Display and total the numbers
    {
        cout << "  " << temp[i];
        total = total + temp[i];
    }

    avg = total / MAXNUMS;
    cout << " is " << avg << endl;

    return 0;
}