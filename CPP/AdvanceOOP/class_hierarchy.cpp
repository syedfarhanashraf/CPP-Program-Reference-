#include <cassert>
#include <string>
#include <iostream>

using std::string;

// TODO: Declare Vehicle as the base class
class Vehicle{
    public:
        string make = "BMW";
        string color = "Black";
        int wheels = 4;
};

// TODO: Derive Car from Vehicle
class Car: public Vehicle{
    public:
        bool trunk = false;
        int wheels = 4;
};
// TODO: Derive Sedan from Car
class Sedan: public Car{
    public:
        int length = 150;
        int seats = 4;
};

// TODO: Update main to pass the tests
int main() {
    Sedan sedan;
    sedan.trunk = true;
    assert(sedan.trunk == true);
    assert(sedan.seats == 4);
    assert(sedan.wheels == 4);
    std::cout << "======== PASSED ======== \n";
}