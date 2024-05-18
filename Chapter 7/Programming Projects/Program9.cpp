#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 60;
    const int COLS = 7;

    int i, j, total, avg;
    double grades[ROWS][COLS];

    for (i = 0; i < ROWS; ++i)
    {
        total = 0;
        for (j = 0; j < (COLS - 2); ++j)
        {
            if (j == 0)
            {
                cout << "\nEnter the student number: ";
                cin >> grades[i][j];
            }
            else
            {
                cout << "Enter the " << j << " grade: ";
                cin >> grades[i][j];
                total = total + grades[i][j];
            }
        }
        grades[i][j] = total / (COLS - 3);
        grades[i][j + 1] = 0.2 * grades[i][1] + 0.3 * grades[i][2] + 0.3 * grades[i][3] + 0.2 * grades[i][4];
    }

    cout << "\nStudent  Grade 1   Grade 2    Grade 3   Grade 4      Avg     Final" << endl;
    cout << "----------------------------------------------------------------------" << endl;

    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j)
        {
            cout << grades[i][j] << "        ";
        }
        cout << endl;
    }

    return 0;
}