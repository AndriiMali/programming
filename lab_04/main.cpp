#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double xc = 0.0;   // koordynata tsentru kola X
    const double yc = 0.0;   // koordynata tsentru kola Y
    const double R = 5.0;    // radius kola

    double x, y;
    cout << "Vvedit koordynaty tochky x, y: ";
    cin >> x >> y;

    double d = sqrt(pow(x - xc, 2) + pow(y - yc, 2));

    cout << fixed << setprecision(2);
    cout << "Vidstan vid tochky do tsentru: " << d << endl;

    if (x == xc && y == yc) {
        cout << "Tochka potraplyaie v tsentr kola." << endl;
    }
    else if (d < R) {
        cout << "Tochka vseredyni kola." << endl;
    }
    else if (d == R) {
        cout << "Tochka na mezhi (obodi) kola. Vvedit inshi koordynaty." << endl;
    }
    else {
        cout << "Tochka za mezhamy kola." << endl;
    }

    return 0;
}