#include <iostream>
#include <cmath>

#define PI 3.14159

class LineSegment{
    public:
        double line;
        double length;
};

class Circle{
    public:
        Circle(LineSegment &rad): radius(rad){}
        float area(){
            return pow(radius.line,2) * PI;
        }
        LineSegment &radius;
};

int main(){
    LineSegment radius{3,4};
    Circle circle(radius);
    std::cout << circle.area() << "\n";
    std::cout << "The area is: " << pow(circle.radius.line,2) * PI << std::endl;
}
