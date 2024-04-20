#include <iostream>
#include <string>
using namespace std;

// Exemplo do SRP sendo violado.
class Customer {
    private:
        string name;
        int id;
    public:
        void createCustomer(string name, int id){
            this->name = name;
            this->id = id;
            cout << this->name << ", " << this->id << endl;
        }
};

int main(){
    Customer c1;
    c1.createCustomer("John", 1);
    return 0;
}