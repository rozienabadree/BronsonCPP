#include <iostream>
#include <iomanip>

using namespace std;

void displaySquaresAndCubes(); // function prototype

int main()
{
    displaySquaresAndCubes();

    return 0;
}

void displaySquaresAndCubes()
{
    int num;
    cout << "NUMBER    SQUARE    CUBE\n"
         << "------    ------    ----\n";
    num = 1;
    while (num < 11)
    {
        cout << setw(3) << num << "        "
             << setw(3) << num * num << "      "
             << setw(4) << num * num * num << endl;
        num++;
    }
    return;
}