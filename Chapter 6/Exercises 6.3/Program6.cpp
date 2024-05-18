#include <iostream>
using namespace std;

void yearCalc(int input, int& years, int& months, int& days); // function prototype

int main()
{
    int value, years, months, days;

    cout << "Enter the number of days since 01/01/2000 to be converted: ";
    cin >> value;

    yearCalc(value, years, months, days);

    cout << "The conversion is below: "
         << "Years:\t" << years << "\n"
         << "Months\t" << months << "\n"
         << "Days\t" << days << "\n";
    
    return 0;
}

void yearCalc(int input, int& years, int& months, int& days)
{
    years = input / 365;
    months = (input - years * 365) / 30;
    days = (input - years * 365 - months * 30);

    return;
}