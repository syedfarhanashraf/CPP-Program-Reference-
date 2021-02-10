// In this exercise, you will start with a LineSegment class and create a Circle class.

// Note that you will compose Circle from LineSegment, instead of inheriting Circle from LineSegment. 
// Specifically, the length attribute from LineSegment will become the circle's radius.

// Create a class LineSegment.
// Declare an attribute length in class LineSegment.
// Define pi (3.14159) with a macro.
// Create a class Circle, composed of a LineSegment that represent's the circle's radius. 
// Use this radius to calculate the area of the circle (area of a circle = \pi r^2πr).
// Verify the behavior of Circle in main().

#include <iostream>
#include <cmath>

#define pi float {3.14159}

class LineSegment{
    public:
        LineSegment(float n) : length(n){};
        float length;
};

class Circle{
    public: 
        Circle(LineSegment n): radius(n){}
        float Area(LineSegment radius){
            return pi * pow(radius.length, 2);
        }
        LineSegment radius;
};


int main(){
    LineSegment radius {3};
    Circle circle(radius);
    std::cout << circle.Area(radius) << "\n";
    //assert(float(circle.Area()) == 28);
}
