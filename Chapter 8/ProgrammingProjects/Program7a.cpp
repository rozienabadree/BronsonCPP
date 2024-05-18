#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
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

    ofstream outFile(filename.c_str());
    if (outFile.fail())
    {
        cout << "\nFailed to open the data file." << endl;
        exit(1);
    }

    for (i = 0; i < MAXCITIES; i++)
    {
        cout << "\nEnter the city's name, population and mayor (XX 0 XX to exit): \n";
        cin >> name >> pop >> mayor;
        if (name == "XX")
            break;

        cout << "\nFor this city the following data has been written to the file: \n";
        cout << name << " " << pop << " " << mayor << endl;

        c = City(name, pop, mayor);
        cTable.push_back(c);
    }

    // put in outfile
    for (i = 0; i < cTable.size(); i++)
    {
        outFile << cTable[i].getName() << " "
                << cTable[i].getPop() << " "
                << cTable[i].getMayor() << endl;
    }

    outFile.close();

    return 0;
}