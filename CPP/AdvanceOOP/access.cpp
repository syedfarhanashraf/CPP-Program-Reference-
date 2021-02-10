#include <iostream>
#include <string>

using std::string;
using std::cout;

class Vehicle{
    public:
        int wheels{0};
        string make = "BMW";
        string color = "Black";
        void Print(){
            cout << "The brand: " << make << " has a vehicle of color: " << color << " and the number of wheels are: " << wheels << "\n";
        }
};

class Scooter: protected Vehicle{
    public: 
        bool electric = false;
        void Make(string s){
            make = s;
        }
        void talk(){
            Print();
        }
};

class Cycle: private Vehicle{
    public:
        void set_make(){
            make = "Audi";
        }
        void talk(){
            Print();
        }
};

int main(){
    Vehicle vehicle;
    Scooter scooter;
    Cycle cycle;
    cycle.set_make();
    scooter.color = "White";
    scooter.Make("Vespa");
    scooter.talk();
    cycle.talk();
}