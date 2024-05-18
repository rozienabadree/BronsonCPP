#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double hydron, pHlevel;
    cout << "Enter the hydronium ion concentration: ";
    cin >> hydron;
    pHlevel = -log10(hydron);
    cout << "The pH level is " << pHlevel << endl;
    
    return 0;
}