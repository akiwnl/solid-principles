#include <iostream>
using namespace std;

class Light {
public:
    void turnOn() {
        cout << "Light is ON" << endl;
    }

    void turnOff() {
        cout << "Light is OFF" << endl;
    }
};

class Switch {
private:
    Light light;

public:
    void toggle() {
        light.turnOn();
        light.turnOff();
    }
};

int main() {
    Switch lightSwitch;
    lightSwitch.toggle();

    return 0;
}
