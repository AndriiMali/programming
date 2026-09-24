#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double r, P, S;
    const double PI = 3.14159265358979;

    cout << "Vvedit radius klumby r = ";
    cin >> r;

    P = 2 * PI * r;
    S = PI * pow(r, 2);

    cout << fixed << setprecision(2);
    cout << "Perymetr klumby: P = " << P << endl;
    cout << "Plosha klumby: S = " << S << endl;

    return 0;
}