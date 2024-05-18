#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int temp;
    int starttemp = 0;
    int endtemp = 40;
    int incr = 5;
    double length = 7365;
    double coefOfExpansion = 11.7e-6;
    double deltaLength;

    cout << "Initial Length: " << length << " meters\n"
         << endl;
    cout << "  Length\n"
         << " Increase        Temperature\n"
         << "(in meters)       (Celsius)\n"
         << "-----------      ------------" << endl;

    cout << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint);

    for (temp = starttemp; temp <= endtemp; temp = temp + incr)
    {
        deltaLength = coefOfExpansion * length * (temp - starttemp);
        cout << setw(8) << setprecision(4) << deltaLength
             << setw(14) << temp << endl;
    }

    return 0;
}
