#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 5;

    int i, j, less60 = 0, less70 = 0;
    int less80 = 0, less90 = 0, great90 = 0;
    double volts[ROWS][COLS];

    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j)
        {
            cout << "Enter a voltage: ";
            cin >> volts[i][j];
            if (volts[i][j] < 60)
                less60++;
            else if (volts[i][j] >= 60 && volts[i][j] < 70)
                less70++;
            else if (volts[i][j] >= 70 && volts[i][j] < 80)
                less80++;
            else if (volts[i][j] >= 80 && volts[i][j] < 90)
                less90++;
            else if (volts[i][j] >= 90)
                great90++;
        }
    }

    cout << "There are " << less60 << " voltages less than 60" << endl;
    cout << "There are " << less70 << " voltages between 60 and 70" << endl;
    cout << "There are " << less80 << " voltages between 70 and 80" << endl;
    cout << "There are " << less90 << " voltages between 80 and 90" << endl;
    cout << "There are " << great90 << " voltages greater than or equal to 90" << endl;

    return 0;
}