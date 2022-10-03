#include "ZavdClass.h"
#include "stdafx.h"
using namespace std;

int ZavdClass::factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n > 0) {
        int fact = 1;
        for (int i = 1; i < n + 1; i++) {
            fact = fact * i;
        }
        return fact;
    }
}
double ZavdClass::Fn_b(double x, double y, double z)
{
    double b1 = pow(abs(y + x), 0.2) / pow(abs(z), 1.34);
    double b2 = pow((y - z), 2) / (1 + pow(sin(z), 2));
    double b3 = pow(abs(z - y), 3) / (z / pow(cos(x), 2));
    return b1 + b2 + b3;
}
double ZavdClass::Fn_a(double x, double y, double z, double Fn_b)
{
    double a1 = pow(pow(abs(pow(x, 2) - 1), 0.3), (1 / 2));
    double a2 = pow(abs(sin(y + 2 * Fn_b)), 1 / 3);
    double a3 = 1 + (x / factorial(1)) + (pow(y, 2) / factorial(2)) + (pow(z, 3) / factorial(3));
    return (a1 - a3) / a3;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    double x = 0.48 * 8;
    double y = 0.47 * 8;
    double z = -1.32 * 8;
    double j = 0.2;
    ZavdClass a;
    cout << "Завдання№1" << endl;
    cout << "Вираз A:" << a.Fn_a(x, y, z, a.Fn_b(x, y, z)) << "\t" << "Вираз B:" << a.Fn_b(x, y, z) << "\t" << endl;
    cout << "Завдання№2" << endl;
    for (double i = -1; i <= 1; i += j)
    {
        cout << "Вираз A:" << a.Fn_a(i, y, z, a.Fn_b(i, y, z)) << "\t" << "Вираз B:" << a.Fn_b(i, y, z)  << endl;
    }
}
