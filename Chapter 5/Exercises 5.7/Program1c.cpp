#include <iostream>
using namespace std;

int main()
{
    float grade;
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
        }
    } while (1);

    return 0;
}