#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double equivDuct(double, double);

int main()
{

    double w, h;

    cout << "Enter the duct's width (in or mm): ";
    cin >> w;
    cout << "Enter the duct's height (in or mm): ";
    cin >> h;

    cout << "The equivalent cirular duct diameter is: " << equivDuct(w, h);

    return 0;
}

double equivDuct(double w, double h)
{

    return (1.3 * pow((w * h), 0.625) / pow((w + h), 0.25));
}