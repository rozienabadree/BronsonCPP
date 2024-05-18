#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // const int MAXNUMS = 20;
    int num;
    cout << "NUMBER SQUARE CUBE\n"
         << "------ ------ ----\n";
    for (num = 10; num >= 1; num--)
        cout << setw(3) << num << "    "
             << setw(3) << num * num << "    "
             << setw(4) << num * num * num << endl;

    return 0;
}