#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() const { // const function
        cout << "Car speed: " << speed << " km/h" << endl;
    }
};

int main() {
    cout << "Task 1: Car class\n";
    Car car1;
    car1.setSpeed(120);
    car1.showSpeed();
}
