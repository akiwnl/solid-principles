#include <iostream>
#include <string>
using namespace std;


class Bird {
    public:
        void peck(){
            cout << "pecking..." << endl;
        }
        void fly(){
            cout << "flying..." << endl;
        }
};

class Penguin : public Bird{
    void performActions(){
        fly(); // Penguins can´t fly 
        peck(); // Penguins can peck
    }
};

class Crow : public Bird{
    void performActions(){
        fly(); // Crows can fly 
        peck(); // Crows can peck
    }
};


int main(){

    return 0;
}