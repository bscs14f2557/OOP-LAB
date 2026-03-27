#include<iostream>
using namespace std;

class Capital {
public:
	static int count;

	Capital() {
		count++;
	}
	void show() {
		cout << count;
	}
}; 
int Capital::count = 0;
int main()

{
	Capital x = Capital();
	Capital y = Capital();
	Capital z = Capital();
	cout << Capital::count;
	return 0;
}