#include <iostream>
#include <string>
using namespace std;

// Exemplo do SRP sendo usado corretamente.
class Customer {
    private:
        string name;
        int id;
    public:
        void createCustomer(string name, int id){
            this->name = name;
            this->id = id;
        }
        string getName(){
            return this->name;
        }
        int getId(){
            return this->id;
        }
};

class Console{
    public:
        void printCustomer(Customer c){
        cout << c.getName() << ", " << c.getId() << endl;
    }
};

int main(){
    Console c;
    Customer c1;
    c1.createCustomer("John", 1);
    c.printCustomer(c1);
    return 0;
}