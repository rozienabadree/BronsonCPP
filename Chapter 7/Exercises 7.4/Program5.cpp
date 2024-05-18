#include <iostream>
using namespace std;

const int NUMVALS = 9;

int main()
{
    void show(double []);   // function protoype
    double temps[NUMVALS] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};

    show(temps);

    return 0;
}

void show(double arr[NUMVALS])
{
    int i;

    for (i = 0; i < NUMVALS; i++)
        cout << "The element at position " << i << " is " << arr[i] << endl;
    
    return;
}