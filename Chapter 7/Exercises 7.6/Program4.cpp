#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int NUMELS, i, number;

    // prompt the user for the size of the vector
    cout << "Please enter the number of items that will be entered: ";
    cin >> NUMELS;

    vector<int> partnums(NUMELS);

    // have the user input the numbers
    for (i = 0; i < NUMELS; i++)
    {
        cout << "Please enter a number to added to the vector: ";
        cin >> number;
        partnums[i] = number;
    }

    cout << "\nThe vector initially has a size of "
         << (int)partnums.size() << ",\n and contains the elements:\n";

    for (i = 0; i < (int)partnums.size(); i++)
        cout << partnums[i] << "   ";

    // modify the element at position 4 (i.e. index = 3) in the vector
    partnums[3] = 144;
    cout << "\n\nAfter replacing the fourth element, the vector has a size of "
         << (int)partnums.size() << ",\n and contains the elements:\n";

    for (i = 0; i < (int)partnums.size(); i++)
        cout << partnums[i] << "  ";

    // insert an element into the vector at position 2 (i.e. index = 1)
    partnums.insert(partnums.begin() + 1, 142);
    cout << "\n\nAfter inserting an element into the third position,"
         << "\n the vector has a size of " << (int)partnums.size() << ","
         << " and contains the elements:\n";

    for (i = 0; i < (int)partnums.size(); i++)
        cout << partnums[i] << "  ";

    // add an element to the end of the vector
    partnums.push_back(157);
    cout << "\n\nAfter adding an element to the end of the list,"
         << "\n  the vector has a size of " << (int)partnums.size() << ","
         << " and contains the elements:\n";

    for (i = 0; i < (int)partnums.size(); i++)
        cout << partnums[i] << "  ";

    // sort the vector
    sort(partnums.begin(), partnums.end());
    cout << "\n\nAfter sorting, the vector's elements are:\n";
    for (i = 0; i < (int)partnums.size(); i++)
        cout << partnums[i] << "  ";

    cout << endl;

    return 0;
}