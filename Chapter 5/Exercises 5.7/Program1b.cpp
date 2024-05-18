#include <iostream>
using namespace std;

int main()
{
    float grade;

    do
    {
        {
            cout << "Please enter a grade: ";
            cin >> grade;
            if (grade == 999)
                break;
            else if (grade < 0 || grade > 100)
                cout << "An invalid grade was entered" << endl;
        }
    } while (1);

    return 0;
}