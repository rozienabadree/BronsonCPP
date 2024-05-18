#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const int NUMELS = 4;
    string n[] = {"Donavan", "Michaels", "Smith", "Jones"}, j;
    int i;

    // instantiate a vector of strings using the n[] array
    vector<string> names(n, n + NUMELS);
    cout << "\nThe vector initially has a size of "
         << (int)names.size() << ",\n and contains the elements:\n";

    for (i = 0; i < (int)names.size(); i++)
        cout << names[i] << "   ";

    j = *max_element(names.begin(), names.end());
    cout << "\nThe max element in the vector is " << j;
    j = *min_element(names.begin(), names.end());
    cout << "\nThe min element in the vector is " << j;

    // modify the element at position 3 (i.e. index = 2) in the vector
    names[2] = "Farmer";
    cout << "\n\nAfter replacing the third element, the vector has a size of "
         << (int)names.size() << ",\n and contains the elements:\n";

    for (i = 0; i < (int)names.size(); i++)
        cout << names[i] << "  ";

    // insert an element into the vector at position 2 (i.e. index = 1)
    names.insert(names.begin() + 1, "Williams");
    cout << "\n\nAfter inserting an element into the second position,"
         << "\n the vector has a size of " << (int)names.size() << ","
         << " and contains the elements:\n";

    for (i = 0; i < (int)names.size(); i++)
        cout << names[i] << "  ";

    // add an element to the end of the vector
    names.push_back("Adams");
    cout << "\n\nAfter adding an element to the end of the list,"
         << "\n  the vector has a size of " << (int)names.size() << ","
         << " and contains the elements:\n";

    for (i = 0; i < (int)names.size(); i++)
        cout << names[i] << "  ";

    // sort the vector
    sort(names.begin(), names.end());
    cout << "\n\nAfter sorting, the vector's elements are:\n";
    for (i = 0; i < (int)names.size(); i++)
        cout << names[i] << "  ";
    cout << endl;

    return 0;
}