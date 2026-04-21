#include <iostream>
using namespace std;

class Car {
private:
    int yearModel, speed;
    string company;

public:
    void setData(int y, string c, int s) {
        yearModel = y;
        company = c;
        speed = s;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
        if (speed < 0) speed = 0;
    }
};

int main() {
    Car c;
    c.setData(2020, "Toyota", 0);

    // Accelerate 5 times
    cout << "Accelerate 5 times: " << endl;

    for (int i = 0; i < 5; i++) {
        c.accelerate();
        cout << "Speed: " << c.getSpeed() << endl;
    }

    // Brake 5 times
    cout << "Brake 5 times: " << endl;
    for (int i = 0; i < 5; i++) {
        c.brake();
        cout << "Speed: " << c.getSpeed() << endl;
    }

    return 0;
}