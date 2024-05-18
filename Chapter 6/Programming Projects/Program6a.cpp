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
    int i;

    cout << "Miles     Kilometers" << endl;
    cout << "-----     ----------" << endl;
    for (i = start; i <= end; i += inc)
    {
        cout << setw(3) << i << "        "
             << fixed << setprecision(2) << (i * 1.61) << endl;
    }

    return;
}