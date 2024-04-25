#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
    void turnOn(){
        cout << "Turning on..." << endl;
    }
    void openSunroof(){
        cout << "Opening sunroof" << endl;
    }
};

int main(){
    Car Evoque;
    Car Palio;

    Evoque.turnOn();
    Evoque.openSunroof();

    Palio.turnOn();
    Palio.openSunroof(); // The car Palio dont't have sunroof.
    return 0;
}