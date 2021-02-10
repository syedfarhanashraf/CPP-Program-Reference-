#include <iostream>
#include <string>

using std::cout;
using std::string;

class Vehicle{
    public:
        int wheels = 0;
        string color = "Blue";
        string make = "BMW";

        void print() const{
            cout << "The vehicle has " << wheels << " wheels and of brand " << make << " with color " << color;
        }
};

class Car : public Vehicle{
    public:
        bool sunroof = false;
};

class Bycycle: public Vehicle{
    public:
        bool kickstand = false;
};

class Scooter: public Vehicle{
    public:
        bool electric = false;
};


int main(){
    Vehicle vehicle;
    Scooter scooter;
    Bycycle cycle;
    Car car;

    car.sunroof = true;
    cycle.kickstand = true;
    scooter.make = "Vespa";
    scooter.color = "Red";
    scooter.print();
}
