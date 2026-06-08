#include <iostream>
using namespace std;

class Complex
{
private:
    double rp;   // real part
    double ip;   // imaginary part

public:
    Complex(double r = 0, double i = 0)
    {
        rp = r;
        ip = i;
    }

    Complex operator+(const Complex& c)
    {
        return Complex(rp + c.rp, ip + c.ip);
    }

    Complex operator-(const Complex& c)
    {
        return Complex(rp - c.rp, ip - c.ip);
    }

    Complex operator*(const Complex& c)
    {
        return Complex(rp * c.rp, ip * c.ip);
    }

    void print()
    {
        cout << rp << " + " << ip << "i" << endl;
    }
};

int main()
{
    Complex b(4, 3);
    Complex c(2, 1);

    Complex add, sub, mul;

    add = b + c;
    sub = b - c;
    mul = b * c;

    cout << "Addition: ";
    add.print();

    cout << "Subtraction: ";
    sub.print();

    cout << "Multiplication: ";
    mul.print();

    c = b;    // assignment operator

    cout << "After Assignment c = b: ";
    c.print();

    return 0;
}