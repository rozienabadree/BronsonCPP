#include <iostream>
using namespace std;

int main()
{
    int *ptNum, *amtAddr, *zAddr, *numAddr, *ptDay, *ptYear;
    int years, m, amt, firstnum = 154, slope, k;

    // given
    zAddr = &slope;
    numAddr = &firstnum;
    ptYear = &years;

    // the problem
    ptNum = &m;
    amtAddr = &amt;
    *zAddr = 25;
    k = *numAddr;
    ptDay = zAddr;
    *ptYear = 1987;
    *amtAddr = *numAddr;

    cout << "The addresses are below:"
         << "\nptNum: " << ptNum
         << "\namtAddr: " << amtAddr
         << "\nzAddr: " << zAddr
         << "\nnumAddr: " << numAddr
         << "\nptDay: " << ptDay 
         << "\nptYear: " << ptYear << endl;

    cout << "\nThe variables are below: "
         << "\nyears: " << years << " address: " << &years
         << "\nm: " << m << " address: " << &m
         << "\namt: " << amt << " address: " << &amt
         << "\nfirstnum: " << firstnum << " address: " << &firstnum
         << "\nslope: " << slope << " address: " << &slope
         << "\nk: " << k << " address: " << &k << endl;

    return 0;
}