#include <iostream>
using namespace std;
int main () {
    double d1 = 1.5;
    double d2 = 2.3;
    double d3 = 5.9;
    double d4 = 4.0;
    double m = 0.25; //  mashtab

    double di1 = d1 * m; // distans
    double di2 = d2 * m;
    double di3 = d3 * m;
    double di4 = d4 * m;

    double total = di1 + di2 + di3 + di4;
    double o_total = (float)((int)total * 10.0 + 0.5) / 10.0; // okruhleno
    
    cout << di1 << "/" << di2 << " /" << di3 << "/" << di4 << "/" <<o_total << endl;
    
    return 0;

}   