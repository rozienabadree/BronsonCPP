#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 60;
    const int COLS = 8;

    int i, j;
    double grades[ROWS][COLS], total, avg, min;

    // max = vals[0][0];

    for (i = 0; i < ROWS; ++i)
    {
        total = 0; // to reset for each student
        min = 99999999;
        for (j = 0; j <= 4; ++j)
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
                if (grades[i][j] < min)
                    min = grades[i][j];
                total = total + grades[i][j];
            }
        }
        grades[i][j] = total / (4);
        grades[i][j + 1] = 0.2 * grades[i][1] + 0.3 * grades[i][2] + 0.3 * grades[i][3] + 0.2 * grades[i][4];
        grades[i][j + 2] = (total - min) / (3);
    }

    cout << "                                                                      Avg of 3" << endl;
    cout << "\nStudent  Grade 1   Grade 2    Grade 3   Grade 4      Avg     Final    highest" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

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