#include <iostream>
using namespace std;

int main()
{
    int i, reps;
    double usenum, postot, negtot;

    postot = 0;
    negtot = 0;

    cout << "Please type in the total number of data values ";
    cout << "to be added: ";
    cin >> reps;

    for (i = 1; i <= reps; ++i)
    {
        cout << "Enter a number (positive or negative) : ";
        cin >> usenum;
        if (usenum > 0)
            postot = postot + usenum;
        else
            negtot = negtot + usenum;
    }
    cout << "The positive total is " << postot << endl;
    cout << "The negative total is " << negtot << endl;

    return 0;
}