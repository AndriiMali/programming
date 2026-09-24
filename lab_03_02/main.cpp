#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double i = 1;
    double xA = 0,      yA = 0;
    double xB = i,      yB = i + 1;
    double xC = -i,     yC = i + 1;

    double a = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    double b = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
    double c = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));

    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    double ha = 2 * S / a;
    double Wc = (2.0 / (a + b)) * sqrt(a * b * p * (p - c));

    cout << fixed << setprecision(2);
    cout << "Storony trykutnyka: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "Plosha trykutnyka: S = " << S << endl;
    cout << "Vysota ha = " << ha << endl;
    cout << "Bisektrysa Wc = " << Wc << endl;

    return 0;
}