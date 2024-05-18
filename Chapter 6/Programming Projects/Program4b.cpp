#include <iostream>
using namespace std;

int main()
{
    int convertdays(int, int, int);

    char slash; // to allow for the day being entered as MM/DD/YY
    int month, day, year;

    cout << "Enter a date in the format MM/DD/YY (such as 2/28/88): ";
    cin >> month >> slash >> day >> slash >> year;

    cout << "The date converted is: "
         << convertdays(month, day, year);

    return 0;
}

int convertdays(int month, int day, int year)
{ // this function doesn't account for dates after 2000
    return (year * 10000 + month * 100 + day);
}