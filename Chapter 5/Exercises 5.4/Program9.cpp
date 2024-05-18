#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    double result = 1;

    cout << "Enter the exponent (an integer value): " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        result = result * 2;
    }

    cout << "result " << result << endl;

    return 0;
}