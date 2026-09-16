#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double palivo1, palivo2, palivo3, palivo4;
    double startMileage, endMileage;

    cout << "Введіть об'єм першої заправки (л): ";
    cin >> palivo1;
    cout << "Введено: " << palivo1 << " л" << endl;

    cout << "Введіть об'єм другої заправки (л): ";
    cin >> palivo2;
    cout << "Введено: " << palivo2 << " л" << endl;

    cout << "Введіть об'єм третьої заправки (л): ";
    cin >> palivo3;
    cout << "Введено: " << palivo3 << " л" << endl;

    cout << "Введіть об'єм четвертої заправки (л): ";
    cin >> palivo4;
    cout << "Введено: " << palivo4 << " л" << endl;

    cout << "Введіть початкове значення автопробігу (км): ";
    cin >> startMileage;
    cout << "Введено: " << startMileage << " км" << endl;

    cout << "Введіть кінцеве значення автопробігу (км): ";
    cin >> endMileage;
    cout << "Введено: " << endMileage << " км" << endl;

    double distance = endMileage - startMileage;
    double palivoused = palivo1 + palivo2 + palivo3;
    double consumption = distance / palivoused;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Пройдена відстань: " << distance << " км" << endl;
    cout << "Витрачено палива: " << palivoused << " л" << endl;
    cout << "Розхід бензину: " << consumption << " км/л" << endl;

    return 0;
}