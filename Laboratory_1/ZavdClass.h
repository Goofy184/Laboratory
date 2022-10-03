#pragma once
class ZavdClass
{
    double x;
    double y;
    double z;
public:
    double Fn_b(double x, double y, double z);
    double Fn_a(double x, double y, double z, double Fn_b);
    double getx() { return x; }
    double gety() { return y; }
    double getz() { return z; }
    int factorial(int n);

};