#include <iostream>
#include <iomanip>

using namespace std;

void selTab(int, int, int = 1); // function prototype

int main()
{
    int startNum, numValues, increment;

    cout << "Enter the starting number, the number of values to be displayed and the increment between values: ";
    cin >> startNum >> numValues >> increment;

    selTab(startNum, numValues, increment);
    selTab(1, 10);

    return 0;
}

void selTab(int x, int y, int z)
{
    int counter = 1;

    cout << "NUMBER    SQUARE    CUBE\n"
         << "------    ------    ----\n";

    while (counter <= y )
    {
        cout << setw(3) << x << "        "
             << setw(3) << x * x << "      "
             << setw(4) << x * x * x << endl;
        x += z;
        counter += 1;
    }

    return;
}