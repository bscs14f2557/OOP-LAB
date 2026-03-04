#include<iostream>
using namespace std;

class Circle {
private:
	double radius;
	 double pi = 3.14159;
public:
	Circle() {
		radius = 0.0;
		pi = 3.14159;
	}

	Circle(double r) {
		radius = r;
		pi = 3.14159;
	}

	/*void set_radius(double r) {
		radius = r;*/
	}

	double get_radius() {
		return radius;
	}

	double get_area() {
		return pi * radius * radius;
	}

	double get_diameter()
	{
		return radius * 2;
	}

	double get_circumference()
	{
		return 2 * pi * radius;
	}

};

int main()
{
	double r;
	cout << "Enter radius of circle: ";
	cin >> r;
	Circle c1(r);

	cout << "Area : " << c1.get_area() << endl;
	cout << "Diameter : " << c1.get_diameter() << endl;
	cout << "Circumference : " << c1.get_circumference() << endl;
	return 0;

}