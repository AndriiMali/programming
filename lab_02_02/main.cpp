#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int grade1, grade2, grade3;         // ocinka
    double weight1, weight2, weight3;   // vagovi kooficienti

    cout << "Введіть першу оцінку: ";
    cin >> grade1;
    cout << "Введіть ваговий коефіцієнт першої оцінки: ";
    cin >> weight1;
    cout << "Введено: оцінка = " << grade1 << ", вага = " << weight1 << endl;

    cout << "Введіть другу оцінку: ";
    cin >> grade2;
    cout << "Введіть ваговий коефіцієнт другої оцінки: ";
    cin >> weight2;
    cout << "Введено: оцінка = " << grade2 << ", вага = " << weight2 << endl;

    cout << "Введіть третю оцінку: ";
    cin >> grade3;
    cout << "Введіть ваговий коефіцієнт третьої оцінки: ";
    cin >> weight3;
    cout << "Введено: оцінка = " << grade3 << ", вага = " << weight3 << endl;

    double weightedAverage = grade1 * weight1 + grade2 * weight2 + grade3 * weight3;

    cout << fixed << setprecision(2);
    cout << "\nСередньозважена оцінка студента: " << weightedAverage << endl;

    return 0;
}