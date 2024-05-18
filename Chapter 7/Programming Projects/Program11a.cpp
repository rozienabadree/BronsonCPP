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
    cout << "\nPart No.   Quantity" << endl;
    cout << "--------------------" << endl;

    for (i = 0; i < numParts; i++)
    {
        cout << setw(4) << parts[i][0] << setw(12) << parts[i][1];
        cout << endl;
    }

    sort(parts, numParts);

    cout << "\nThe data in decreasing quantity order is: " << endl;
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
    int i, j, max, maxidx, temp, part;

    for (i = 0; i < (numel - 1); i++)
    {
        max = num[i][1];
        part = num[i][0];
        maxidx = i;
        for (j = i + 1; j < numel; j++)
        {
            if (num[j][1] > max)
            {
                max = num[j][1];
                maxidx = j;
                part = num[j][0];
            }
        }
        if (max > num[i][1])
        {
            temp = num[i][1];

            num[i][1] = max;
            num[maxidx][1] = temp;
            temp = num[i][0];
            num[i][0] = part;
            num[maxidx][0] = temp;
        }
    }

    return;
}