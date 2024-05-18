#include <iostream>
using namespace std;

int main()
{
    const double XMAX = 5.0;
    const double ZMAX = 6.0;
    const double XSTEP = 1.0;
    double x, y, z;

    for (x = 1.0; x <= XMAX; x += XSTEP)
    {
        for (z = 2.0; z <= ZMAX; z++)
        {
            if (z == x)
                cout << "Function Undefined" << endl;
            else
            {
                y = (x * z) / (x - z);
                cout << "x = " << x << ", z = " << z << ", y = " << y << endl;
            }
        }
    }

    return 0;
}