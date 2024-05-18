#include <iostream>
using namespace std;

int main()
{
    const int MAXGIFT = 1000;
    int gift = 10;
    int total = gift;
    int age = 12;

    for (gift = 10; gift <= MAXGIFT; age++)
    {
        cout << "Gift: " << gift << " age: " << age << " total: " << total << endl;
        gift *= 2;
        total += gift;
    }
/*
    while (gift <= MAXGIFT)
    {
        age++;
        gift *= 2;
        total += gift;
        cout << age << " " << gift << " " << total << endl;
    }
*/
    cout << "The child's age when the gift exceeds the maximum is " << age 
         << " and the total gift amount will be " << total << endl;

    return 0;
}