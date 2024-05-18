#include <iostream>
using namespace std;

int main()
{
    float grade, total, average;
    int count = 0;
    int invalid = 0;

    do
    {
        {
            cout << "Please enter a grade: ";
            cin >> grade;
            if (grade == 999)
                break;
            else if (grade < 0 || grade > 100)
            {
                cout << "An invalid grade was entered" << endl;
                invalid++;
                if (invalid == 5)
                    break;
            }
            count++;
            total += grade;
        }
    } while (1);

    average = total / count;
    
    cout << "The average of the grades are " << average << endl;
    return 0;
}