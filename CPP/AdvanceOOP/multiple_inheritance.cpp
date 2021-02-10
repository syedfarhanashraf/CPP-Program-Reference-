#include <iostream>
#include <cassert>

class Car{
    public:
        void Drive() const{
            std::cout << "Let's Drive!" << "\n";
        }
};

class Boat{
    public:
        void Cruise() const{
            std::cout << "Let's cruise!" << "\n";
        }
};

class Amphibious : public Car, public Boat{
    public:
        void Drive() const{
            std::cout << "Rishi Drive \n";
        }
        void Cruise() const{
            std::cout << "Rishi Cruise \n";
        }
};

int main(){
    Amphibious rishi;
    rishi.Cruise();
    rishi.Drive();

    Amphibious *ri = new(Amphibious);
    ri->Cruise();
    ri->Drive();
}