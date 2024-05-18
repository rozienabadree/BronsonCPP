#include <iostream>
using namespace std;

int main()
{
    int testing = 5;
    int counter;

    for (cout << "1 " , counter = 1; cout << "2 ", counter <= testing; cout << "3 ", counter++)
        cout << "\ninside the loop " << counter << endl;
    
    return 0;
}