#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 50; // Specified in exercise
    int peopleTypes[SIZE];
    int i = 0, infant = 0, child = 0, teen = 0, adult = 0;

    do
    {
        cout << "Enter a type: ";
        cin >> peopleTypes[i];
        if (peopleTypes[i] == 1)
            infant++;
        else if (peopleTypes[i] == 2)
            child++;
        else if (peopleTypes[i] == 3)
            teen++;
        else if (peopleTypes[i] == 4)
            adult++;
        else
            cout << "Invalid entry!" << endl;
        i++;
    } while (peopleTypes[i - 1] > 0);

    cout << "\nThere were: " << endl;
    cout << infant << " infants" << endl;
    cout << child << " children" << endl;
    cout << teen << " teenagers" << endl;
    cout << adult << " adults" << endl;

    return 0;
}