#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine() {}
    Engine(int hp) { horsepower = hp; }
};

class CarWithEngine {
public:
    string model;
    Engine engine;

    CarWithEngine(string m, Engine e) {
        model = m;
        engine = e;
    }

    void display() {
        cout << "Car Model: " << model << ", Engine Power: " << engine.horsepower << " HP" << endl;
    }
};

int main() {
    cout << "Task 4: Car with Engine\n";
    Engine e1(250);
    CarWithEngine car("Toyota Supra", e1);
    car.display();
    cout << "--------------------\n";
}
