#include <iostream>
using namespace std;

double fracpart(double); // function prototype
int whole(double);       // function prototype

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "\nThe fraction part of " << num << " is: "
         << fracpart(num) << endl;

    return 0;
}

double fracpart(double x)
{
    return (x - whole(x));
}

int whole(double num) // header line
{
    int val;
    val = num;
    return val;
}