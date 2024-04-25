#include <iostream>
using namespace std;

class Light {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class Bulb : public Light {
public:
    void turnOn() override {
        cout << "Bulb is ON" << endl;
    }
    void turnOff() override {
        cout << "Bulb is OFF" << endl;
    }
};

class Switch {
private:
    Light& light;

public:
    Switch(Light& light) : light(light) {}

    void toggle(){
        light.turnOn();
        light.turnOff();
    }
};

int main(){
    Bulb bulb;
    Switch lightSwitch(bulb);
    lightSwitch.toggle();
    
    return 0;
}