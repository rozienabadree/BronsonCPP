#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int step = 50, span = 400;
    int startYear = 1626;
    int endYear = startYear + span;
    double amount = 24.0;
    double rate = 0.05;
    int year, count;

    cout << "Year     Balance\n";
    cout << "---      --------\n";
    cout << fixed << setprecision(2);
    cout << startYear << "      " << amount << endl;

    count = 1;
    for (year = startYear + 1; year <= endYear; year++)
    {
        amount = amount + amount * rate;
        count++;
        if (count > step)
        {
            cout << year << "      " << amount << endl;
            count = 1; // reset printout counter
        }
    }

    return 0;
}