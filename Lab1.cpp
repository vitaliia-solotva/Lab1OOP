#include <iostream>
#include <iomanip>
#include "Calculation.h"

using namespace std;

int main()
{
    double x, y, z;

    // Завдання 1
    cout << "Enter X: ";
    cin >> x;

    cout << "Enter Y: ";
    cin >> y;

    cout << "Enter Z: ";
    cin >> z;

    Calculation* calculator;
    calculator = new Calculation(0, 0);

    calculator->computeB(x, y, z);
    calculator->computeAWithB(x, y, z);

    cout << "\nResult:" << endl;
    cout << "b = " << calculator->getB() << endl;
    cout << "a = " << calculator->getA() << endl;

    // Завдання 2
    cout << "\nTabulation:" << endl;
    cout << "------------------------------------------" << endl;
    cout << "       x           a           b" << endl;
    cout << "------------------------------------------" << endl;

    y = 6.58;
    z = -18.48;

    for (x = -1.0; x <= 1.0001; x += 0.2)
    {
        calculator->computeB(x, y, z);
        calculator->computeAWithB(x, y, z);

        cout << fixed << setprecision(6)
            << setw(10) << x
            << setw(12) << calculator->getA()
            << setw(12) << calculator->getB()
            << endl;
    }

    delete calculator;

    return 0;
}