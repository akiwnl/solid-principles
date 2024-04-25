#include <iostream>
#include <string>
using namespace std;


class Bird {
    public:
        void peck(){
            cout << "pecking..." << endl;
        }
};
class FlyingBirds : public Bird {
    public:
        void fly(){
            cout << "flying..." << endl;
        }
};
class Penguin : Bird {
    public:
        void performActions(){
            peck();
        }
    // They can peck.
};
class Crow : public FlyingBirds {
    public:
        void performActions(){
            fly();
            peck();
        }
    // Crow can fly and peck.
};

int main(){
    Crow crow;
    crow.performActions();

    Bird penguin;
    penguin.peck();
    return 0;
}