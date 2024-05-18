#include <iostream>
using namespace std;

int main()
{
    int FIB1 = 0;
    int FIB2 = 1;
    int n, counter, output;

    cout << "Please enter which term of the Fibonacci sequence to calculate: ";
    cin >> n;

    cout << "The Fibonacci sequence is: 0 1 ";

    for (counter = 3; counter <= n; counter++)
    {
        output = FIB1 + FIB2;
        cout << output << " ";
        FIB1 = FIB2;
        FIB2 = output;
    }
    
    return 0;
}