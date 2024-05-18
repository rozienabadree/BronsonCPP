#include <iostream>
using namespace std;

void evenOdd(int);      // function prototype

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    evenOdd(number);

    return 0;
}

void evenOdd(int x)
{
    if (x % 2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;

    return;
}