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
        }
    } while (grade >= 0 && grade <= 100);
    
    return 0;
}