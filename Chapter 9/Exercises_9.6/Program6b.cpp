#include <iostream>
using namespace std;

int main()
{
    double fracpart(double);  // function prototypes
    int a = 8;
    double b = -9.8;
    double c = 12.42324;  

    cout << a << " fracpart: " << fracpart(a) << endl;
    cout << b << " fracpart: " << fracpart(b) << endl;
    cout << c << " fracpart: " << fracpart(c) << endl;

    cin.ignore();

    return 0;
}

double fracpart(double number)
{
	int whole(int);
	return (number - whole(number));
}

int whole(int number)
{
    return number;
}