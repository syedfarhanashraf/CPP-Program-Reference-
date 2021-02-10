
    // Define a class called Sphere.
    // Add one private member variable: radius.
    // Define a constructor to initialize the radius.
    // Define an accessor method that returns the radius.
    // Define a member function to return the volume of the sphere.
    // Write a main() function to initialize an object of type Sphere.


#include <cassert>
#include <iostream>
#include <cmath>
#include <stdexcept>

// TODO: Define class Sphere
class Sphere {
 public:
  // Constructor
    Sphere(float r):radius(r){}
    float Volume(){
        std::cout << 4/3 << "\n";
        return (pi * (4/3.0) * pow(radius,3));
    }

  // Accessors
    float Radius() const{return radius;}
    
 private:
  // Private members
  float radius{};
  double pi {3.14159265};
};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  std::cout << sphere.Volume() << "\n";
  assert(abs(sphere.Volume() - 523.6) < 1);
}
