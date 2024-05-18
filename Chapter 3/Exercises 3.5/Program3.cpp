#include <iostream>
using namespace std;

int main()
{
    float amount, interest;
    const float PRIME = 0.04; // prime interest rate
    cout << "Enter the amount: ";
    cin >> amount;
    interest = PRIME * amount;
    cout << "The interest earned is"
         << interest << " dollars" << endl;
         
    return 0;
}