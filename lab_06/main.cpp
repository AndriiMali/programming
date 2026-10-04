#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double OUNCE_TO_GRAM = 28.353495;
    const double OUNCE_TO_CARAT = 142;

    double start, step;
    int rows;

    cout << "Enter start value (ounces): ";
    cin >> start;
    cout << "Enter step: ";
    cin >> step;
    cout << "Enter number of rows (10-15): ";
    cin >> rows;

    if (rows < 10 || rows > 15)
    {
        cout << "Error: number of rows must be from 10 to 15!" << endl;
        return 1;
    }

    cout << endl;
    cout << "+------------+--------------+--------------+" << endl;
    cout << "|   Ounces   |    Grams     |    Carats    |" << endl;
    cout << "+------------+--------------+--------------+" << endl;

    double ounces = start;
    int i = 1;

    while (i <= rows)
    {
        cout << "| " << fixed << setprecision(2) << setw(10) << ounces
             << " | " << setw(12) << ounces * OUNCE_TO_GRAM
             << " | " << setw(12) << ounces * OUNCE_TO_CARAT
             << " |" << endl;

        ounces += step;   // pryrist znachennia miry
        i++;              // pryrist lichylnyka
    }

    cout << "+------------+--------------+--------------+" << endl;

    return 0;
}