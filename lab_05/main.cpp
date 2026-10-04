#include <iostream>
using namespace std;

// Vlasnyi logichnyi typ danykh
enum Logical { False = 0, True = 1 };

int main()
{
    long id;
    int g1, g2, g3, g4;

    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter four exam grades: ";
    cin >> g1 >> g2 >> g3 >> g4;

    // Perevirka pravylnosti otsinok
    Logical correct = (g1 >= 0 && g2 >= 0 && g3 >= 0 && g4 >= 0) ? True : False;

    if (!correct)
    {
        cout << "Error: exam grade cannot be negative!" << endl;
        return 1;
    }

    float avg = (g1 + g2 + g3 + g4) / 4.0f;

    // Ekzamen skladeno, yaksho serednie >= 3
    Logical passed = (avg >= 3) ? True : False;

    cout << "Student ID: " << id << endl;
    cout << "Average grade: " << avg << endl;

    if (passed)
    {
        cout << "Exam passed: ";
        if (avg < 4)
            cout << "satisfactory." << endl;
        else if (avg < 5)
            cout << "good." << endl;
        else
            cout << "excellent." << endl;
    }
    else
    {
        cout << "Exam failed." << endl;
    }

    return 0;
}