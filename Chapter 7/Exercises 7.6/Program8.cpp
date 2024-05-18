#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const int NUMELS = 4;
    string names[] = {"Donavan", "Michaels", "Smith", "Jones"};
    int i;

    // instantiate a vector of strings using the names[] array
    vector<string> n(names, names + NUMELS);
    cout << "\nThe vector initially has a size of "
         << (int)n.size() << ",\n and contains the elements:\n";

    for (i = 0; i < (int)n.size(); i++)
        cout << n[i] << "   ";

    // modify the element at position 3 (i.e. index = 2) in the vector
    n[2] = "Farmer";
    cout << "\n\nAfter replacing the third element, the vector has a size of "
         << (int)n.size() << ",\n and contains the elements:\n";

    for (i = 0; i < (int)n.size(); i++)
        cout << n[i] << "  ";

    // insert an element into the vector at position 2 (i.e. index = 1)
    n.insert(n.begin() + 1, "Williams");
    cout << "\n\nAfter inserting an element into the second position,"
         << "\n the vector has a size of " << (int)n.size() << ","
         << " and contains the elements:\n";

    for (i = 0; i < (int)n.size(); i++)
        cout << n[i] << "  ";

    // add an element to the end of the vector
    n.push_back("Adams");
    cout << "\n\nAfter adding an element to the end of the list,"
         << "\n  the vector has a size of " << (int)n.size() << ","
         << " and contains the elements:\n";

    for (i = 0; i < (int)n.size(); i++)
        cout << n[i] << "  ";

    // sort the vector
    sort(n.begin(), n.end());
    cout << "\n\nAfter sorting, the vector's elements are:\n";

    for (i = 0; i < (int)n.size(); i++)
        cout << n[i] << "  ";

    cout << endl;

    return 0;
}