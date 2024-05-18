#include <iostream>
using namespace std;

int main()
{
    int i, reps, poscnt = 0, negcnt = 0;
    float usenum, postot = 0, negtot = 0, posavg, negavg;
    postot = 0;
    negtot = 0;
    poscnt = 0;
    negcnt = 0;

    cout << "Please type in the total number of data values ";
    cout << "to be added: ";
    cin >> reps;

    for (i = 1; i <= reps; ++i)
    {
        cout << "Enter a number (positive or negative) : ";
        cin >> usenum;
        if (usenum > 0)
        {
            poscnt++;
            postot = postot + usenum;
        }
        else if (usenum < 0)
        {
            negcnt++;
            negtot = negtot + usenum;
        }
    }

    if (poscnt > 0)
        posavg = postot / poscnt;
    else
        posavg = 0;

    if (negcnt > 0)
        negavg = negtot / negcnt;
    else
        negavg = 0;

    cout << "The positive average is " << posavg << endl;
    cout << "The negative average is " << negavg << endl;

    return 0;
}
