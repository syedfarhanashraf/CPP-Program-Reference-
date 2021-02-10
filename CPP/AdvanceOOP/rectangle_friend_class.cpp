/*
Declare a class Rectangle.
Define a class Square.
Add class Rectangle as a friend of the class Square.
Add a private attribute side to class Square.
Create a public constructor in class Square that initializes the side attribute.
Add private members width and height to class Rectangle.
Add a Rectangle() constructor that takes a Square as an argument.
Add an Area() function to class Rectangle.
*/

#include <iostream>

//class Rectangle;

class Square{
    public:
        Square(int length):side(length){};
    private:
        friend class Rectangle;
        int side{0};
};

class Rectangle{
    public:
        Rectangle(const Square &square):height(square.side),width(square.side){};
        int Area() const{return height * width;}
    private:
        int height {0};
        int width {0};
};

int main(){
    Square square(2);
    Rectangle rectangle(square);
    int area = rectangle.Area();    
    area = area * area;
    std::cout << rectangle.Area() << "\n";
}