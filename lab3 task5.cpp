#include <iostream>
using namespace std;

class Message {
public:
    // Constructor
    Message() {
        cout << "Object created! Welcome Good luck for further coding" << endl;
    }
};

int main() {
    Message m1;   // message will display
    Message m2;   // message will display again

    return 0;
}