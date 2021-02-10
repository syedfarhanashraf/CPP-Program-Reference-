#include <iostream>
#include <cassert>
#include <vector>

class Wheels{
    public:
        Wheels() : diameter(100){};
        float diameter = 50;
};

class Car{
    public:
        Car(): wheels(8,Wheels()){};
        std::vector<Wheels> wheels;
};

int main(){
    Car car;
    std::cout << car.wheels.size() << "\n";
}


