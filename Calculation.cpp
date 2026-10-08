#include "Calculation.h"
#include <cmath>

using namespace std;

Calculation::Calculation()
{
    a = 0;
    b = 0;
}

Calculation::Calculation(double a, double b)
{
    this->a = a;
    this->b = b;
}

void Calculation::computeB(double x, double y, double z)
{
    b = log(pow(abs(z), 1.0 / 3.0))
        + (pow(y, 2) + pow(cos(pow(abs(x), 0.3)), 2))
        / (3 + y + pow(x, 2) / Faktr(2)
            + pow(z, 3) / Faktr(3));
}

void Calculation::computeAWithB(double x, double y, double z)
{
    double insideRoot =
        abs((pow(y, 2) - x) / (x + 2.1));

    double insideLog =
        pow(b, 2)
        - cbrt(insideRoot)
        + (x - pow(y, 2))
        / (b + 2 * pow(z, 2));

    a = log(pow(abs(insideLog), 2.0 / 3.0));
}

double Calculation::Faktr(int n)
{
    double f = 1;

    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
            f *= i;
    }

    return f;
}

double Calculation::getA()
{
    return a;
}

double Calculation::getB()
{
    return b;
}
