#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 100;
const int COLS = 2;

int main()
{
    void sort(int[ROWS][COLS], int);

    int i, j, numParts;
    int parts[ROWS][COLS];

    cout << "\nEnter how many parts: ";
    cin >> numParts;

    for (i = 0; i < numParts; ++i)
    {
        cout << "Enter a part no. and a quantity: ";
        cin >> parts[i][0] >> parts[i][1];
    }

    cout << "\nThe entered data is: " << endl;
    cout << "\nPart No.   Quanitity" << endl;
    cout << "--------------------" << endl;

    for (i = 0; i < numParts; i++)
    {
        cout << setw(4) << parts[i][0] << setw(12) << parts[i][1];
        cout << endl;
    }

    sort(parts, numParts);

    cout << "\nThe data in decreasing part no. order is: " << endl;
    cout << "\nPart No.   Quantity" << endl;
    cout << "--------------------" << endl;

    for (i = 0; i < numParts; i++)
    {
        cout << setw(4) << parts[i][0] << setw(12) << parts[i][1];
        cout << endl;
    }

    return 0;
}

void sort(int num[ROWS][COLS], int numel)
{
    int i, j, max, maxidx, temp, quant;

    for (i = 0; i < (numel - 1); i++)
    {
        max = num[i][0];
        quant = num[i][1];
        maxidx = i;
        for (j = i + 1; j < numel; j++)
        {
            if (num[j][0] > max)
            {
                max = num[j][0];
                maxidx = j;
                quant = num[j][1];
            }
        }
        if (max > num[i][0])
        {
            temp = num[i][0];

            num[i][0] = max;
            num[maxidx][0] = temp;
            temp = num[i][1];
            num[i][1] = quant;
            num[maxidx][1] = temp;
        }
    }

    return;
}