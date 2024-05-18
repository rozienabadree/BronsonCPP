#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    void makeMilesKmTable(int, int, double);

    int start, stop;
    double inc;

    cout << "Enter the starting miles: ";
    cin >> start;
    cout << "Enter the ending miles: ";
    cin >> stop;
    cout << "Enter the increments: ";
    cin >> inc;

    makeMilesKmTable(start, stop, inc);

    return 0;
}

void makeMilesKmTable(int start, int end, double inc)
{
    int i, split;

    split = (start + end) / 2;

    cout << "Miles  =  Kilometers    Miles  =  Kilometers " << endl;
    for (i = start; i <= split; i += inc)
    {
        cout << setw(3) << i << "        "
             << fixed << setprecision(2) << (i * 1.61)
             << "        " << setw(3);
        if ((i + 1 - start + split + 1) > end)
            cout << end;
        else if (inc == 1)
            cout << (i - start + split + 1);
        else
            cout << (i + 1 - start + split + 1);
        cout << "        " << fixed << setprecision(2);
        if (inc == 1)
            cout << (i - start + split + 1) * 1.61 << endl;
        else
            cout << (i + 1 - start + split + 1) * 1.61 << endl;
    }

    return;
}