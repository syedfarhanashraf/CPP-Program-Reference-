// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>

// TODO: Define pi
#define PI 3.14159

// TODO: Define the abstract class Shape
  // TODO: Define public virtual functions Area() and Perimeter()
  // TODO: Append the declarations with = 0 to specify pure virtual functions

class Shape{
    public:
        virtual float Area() const = 0;
        virtual float Perimeter() const = 0;
};

// TODO: Define Rectangle to inherit publicly from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private attributes width and height

class Rectangle: public Shape{
    public:
        Rectangle(int width, int height): width(width), height(height){}
        float Area() const override{
            return this->width * this->height;
        }
        float Perimeter() const override{
            return 2 * (this->height + this->width);
        }
    private:
        int width;
        int height;
};

// TODO: Define Circle to inherit from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private member variable radius
class Circle: public Shape{
    public:
        Circle(float radius): radius_(radius){}
        float Area() const override{
            return PI * pow(this->radius_,2);
        }
        float Perimeter() const override{
            return 2.0 * PI * this->radius_;
        }
    private:
        float radius_;
};

// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}