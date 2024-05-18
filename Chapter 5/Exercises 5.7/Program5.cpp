#include <iostream>
using namespace std;

int main()
{
    double num;
    double approx, prevApprox;

    cout << "\nEnter a number: ";
    cin >> num;
    cout << "Enter a guess for its square root: ";
    cin >> approx;

    do
    {
        prevApprox = approx;
        approx = ((num / prevApprox) + prevApprox) / 2.0;
    } while ((prevApprox - approx) >= 0.00001);

    cout << "\nThe final approximation is: " << approx << endl;

    return 0;
}