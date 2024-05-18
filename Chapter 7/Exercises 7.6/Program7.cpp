#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const int NUMELS = 4;
    int n[] = {136, 122, 109, 146};
    int i, nm;

    // instantiate a vector of strings using the n[] array
    vector<int> partnums(n, n + NUMELS);
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

    vector<int>::iterator it;
    cout << "\nEnter a number to search for: ";
    cin >> nm;

    it = find(partnums.begin(), partnums.end(), nm);
    if (it != partnums.end())
        cout << nm << " was found";
    else
        cout << nm << " was not found";

    // sort the vector
    sort(partnums.begin(), partnums.end());
    cout << "\n\nAfter sorting, the vector's elements are:\n";

    for (i = 0; i < (int)partnums.size(); i++)
        cout << partnums[i] << "  ";

    cout << "\nEnter a number to search for: ";
    cin >> nm;
    if (binary_search(partnums.begin(), partnums.end(), nm))
        cout << nm << " was found";
    else
        cout << nm << " was not found";

    cout << endl;

    return 0;
}