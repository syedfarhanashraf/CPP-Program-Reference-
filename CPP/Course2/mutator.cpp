
    // Create a class called Car.
    // Create 3 member variables: horsepower, weight and brand. The brand attribute must be a character array.
    // Create accessor and mutator functions for all member data. The mutator function for brand must accept a C++ string as a parameter and convert that string into a C-style string (a character array ending in null character) to set the value of brand.
    // The accessor function for the brand must return a string, so in this function you first will need to convert brand to std::string, and then return it.




#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
        int horse_power{};
        float weight{};
        char brand[];
        
    // TODO: Declare getter and setter for brand
    public:
        int HP(){return horse_power;}
        int Weight(){return weight;}
        std::string Brand() {return brand}
        
};

// Define setters

// Define getters

// Test in main()
int main() 
{
    Car car;
    car.SetBrand("Peugeot");
    std::cout << car.GetBrand() << "\n";   
}