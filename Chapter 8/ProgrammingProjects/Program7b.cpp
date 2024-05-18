#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class City
{
    // data declaration section
private:
    string name;
    int pop;
    string mayor;

    // methods declaration
public:
    City() { setCity("Salam", 87435, "Smith"); };                   // default constructor
    City(string nm, int popu, string my) { setCity(nm, popu, my); } // overloaded constructor
    void setCity(string nm, int popu, string my)
    {
        name = nm;
        pop = popu;
        mayor = my;
    };
    string getName() { return name; };
    int getPop() { return pop; };
    string getMayor() { return mayor; };
};

int main()
{
    const int MAXCITIES = 20; // student can pick max number
    string filename = "city.dat";
    string name, mayor;
    int i, pop;
    City c;
    vector<City> cTable;

    ifstream inFile(filename.c_str());
    if (inFile.fail())
    {
        cout << "\nFailed to open the input file." << endl;
        cout << "Make sure the file currently exists." << endl;
        exit(1);
    }

    inFile >> name >> pop >> mayor;
    while (inFile.good())
    {
        c = City(name, pop, mayor);
        cTable.push_back(c);
        inFile >> name >> pop >> mayor;
    }

    // sort the data
    sort(cTable.begin(), cTable.end());

    // display data
    cout << "The data in the files is: " << endl;
    for (i = 0; i < cTable.size(); i++)
    {
        cout << cTable[i].getName() << " "
             << cTable[i].getPop() << " "
             << cTable[i].getMayor() << endl;
    }

    inFile.close();

    return 0;
}

// this is for the sort algorithm
bool operator<(City &a, City &b)
{
    if (a.getName() < b.getName())
        return true;
    else
        false;
}