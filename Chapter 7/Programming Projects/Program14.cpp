#include <iostream>
#include <string>
using namespace std;

const int WEEKS = 2;
const int DAYS = 7;
const int TEMPS = 2;

int main()
{
    string dayOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int weather[WEEKS][DAYS][TEMPS];
    int i, j, choice, week, day, sumHigh, sumLow, max, min;
    double avgHigh, avgLow;

    // populating the array

    // week 1
    weather[0][0][0] = 79;
    weather[0][0][1] = 67;
    weather[0][1][0] = 70;
    weather[0][1][1] = 51;
    weather[0][2][0] = 74;
    weather[0][2][1] = 53;
    weather[0][3][0] = 70;
    weather[0][3][1] = 55;
    weather[0][4][0] = 78;
    weather[0][4][1] = 65;
    weather[0][5][0] = 90;
    weather[0][5][1] = 64;
    weather[0][6][0] = 75;
    weather[0][6][1] = 63;

    // week 2
    weather[1][0][1] = 59;
    weather[1][0][0] = 71;
    weather[1][1][1] = 65;
    weather[1][1][0] = 85;
    weather[1][2][1] = 64;
    weather[1][2][0] = 86;
    weather[1][3][1] = 65;
    weather[1][3][0] = 85;
    weather[1][4][1] = 61;
    weather[1][4][0] = 82;
    weather[1][5][1] = 57;
    weather[1][5][0] = 72;
    weather[1][6][1] = 59;
    weather[1][6][0] = 75;

    do
    {
        cout << "\n1. Any day's high and low temperature" << endl;
        cout << "2. Average high and low temperatures for a given week" << endl;
        cout << "3. Week and day with highest temperature" << endl;
        cout << "4. Week and day with lowest temperature" << endl;
        cout << "5. Exit" << endl;
        cout << "\nPlease select one of the above for display: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\n\nWhich week (1 or 2)? ";
            cin >> week;
            cout << "Which day (0 for Sunday through 6 for Saturday)? ";
            cin >> day;
            cout << "\nFor " << dayOfWeek[day] << " of week " << week << ":" << endl;
            cout << "High temp = " << weather[week - 1][day][0] << " degrees" << endl;
            cout << "Low temp = " << weather[week - 1][day][1] << " degrees" << endl;
        }
        else if (choice == 2)
        {
            cout << "\n\nWhich week (1 or 2)? ";
            cin >> week;
            for (i = 0; i < DAYS; i++)
            {
                sumHigh = weather[week][i][0];
                sumLow = weather[week][i][1];
            }
            avgHigh = sumHigh / DAYS;
            avgLow = sumLow / DAYS;
            cout << "\nFor week " << week << ":" << endl;
            cout << "Average high = " << avgHigh << " degrees" << endl;
            cout << "Average low = " << avgLow << " degrees" << endl;
        }
        else if (choice == 3)
        {
            max = weather[0][0][0];

            for (i = 0; i < WEEKS; i++)
            {
                for (j = 0; j < DAYS; j++)
                {
                    if (max < weather[i][j][0])
                    {
                        max = weather[i][j][0];
                        week = i;
                        day = j;
                    }
                }
            }
            cout << "\n\nThe high temp of " << max << " degrees occured on "
                 << dayOfWeek[day] << " of week " << week + 1 << endl;
        }
        else if (choice == 4)
        {
            min = 999999;

            for (i = 0; i < WEEKS; i++)
            {
                for (j = 0; j < DAYS; j++)
                {
                    if (min > weather[i][j][1])
                    {
                        min = weather[i][j][1];
                        week = i;
                        day = j;
                    }
                }
            }
            cout << "\n\nThe low temp of " << min << " degrees occured on "
                 << dayOfWeek[day] << " of week " << week + 1 << endl;
        }
        else if (choice == 5)
            exit(0);

    } while (choice != 5);

    return 0;
}
