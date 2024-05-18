#include <iostream>
using namespace std;

int main()
{
    int whole(int); // function prototype
    int a = 8;
    double b = -9.8;
    double c = 12.42324;

    cout << a << " whole: " << whole(a) << endl;
    cout << b << " whole: " << whole(b) << endl;
    cout << c << " whole: " << whole(c) << endl;

    cin.ignore();

    return 0;
}

int whole(int number)
{
    return number;
}