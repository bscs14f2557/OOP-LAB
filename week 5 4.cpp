#include<iostream>
using namespace std;
class Complex {
private:
	double a;
	double b;
public:
	Complex() {
		
	}
	Complex(double x,double y) {
		
		a = x;
		b = y;
	}
	Complex add(const Complex c) {
		Complex result;
		result.a = a + c.a;
		result.b = b + c.b;
		return result;
	}
	Complex subtract(const Complex c) {
		Complex result;
		result.a = a - c.a;
		result.b = b - c.b;
		return result;
	}
	Complex multiply(const Complex c) {
		Complex result;
		result.a = a * c.a - b * c.b;
		result.b = a * c.b + b * c.a;
		return result;
	}
	void display()
	{
		cout << a << "+";
		cout << b << "j";
	}
};
int main()
{

	Complex c1 = Complex(2, 3);
	Complex c2 = Complex(4,12);

	Complex add=c1.add(c2);
	add.display();

	Complex subtract = c1.subtract(c2);
	subtract.display();

	Complex multiply = c1.multiply(c2);
	multiply.display();

	return 0;
}