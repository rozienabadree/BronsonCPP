#include <iostream>
using namespace std;

int main()
{
    int num, count;
    long date;
    float slope;
    double power;

    cout << "The addresses stored in the integer variables are num: " << &num << " and count: " << &count << endl;
    cout << "The address stored in the long variable date is date: " << &date << endl;
    cout << "The address stored in the float variable is slope: " << &slope << endl;
    cout << "the address stored in the power variable is power: " << &power << endl;

    cout << endl;

    cout << "The size of the variables in bytes are below:\n"
         << "num: " << sizeof(num)
         << "\ncount: " << sizeof(count)
         << "\ndate: " << sizeof(date)
         << "\nslope: " << sizeof(slope)
         << "\npower: " << sizeof(power) << endl;

    return 0;
}