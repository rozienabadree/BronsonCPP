#include <iostream>
using namespace std;

int main()
{
    int *integer;
    long *longNum;
    float *floatNum;
    double *doubleNum;

    cout << endl;

    cout << "The size of the POINTER variables in bytes are below:\n"
         << "an integer pointer: " << sizeof(*integer)
         << "\na long pointer: " << sizeof(*longNum)
         << "\na float pointer: " << sizeof(*floatNum)
         << "\na double pointer: " << sizeof(*doubleNum) << endl;

    return 0;
}