// Define a class Animal.

// Define 3 member variables: color, name, age.

// Define a derived class Snake that inherits from the base class Animal.

// Create a member variable length for the Snake class.

// Create a derived class Cat that inherits from the base class Animal.

// Create a member variable height for the Cat class.

// Create MakeSound() member functions for each of the derived classes.

// In the main() function instantiate Snake and Cat objects. 
//     Initialize both their unique and derived attributes. Program them to make a sound.

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Animal{
    public:
        string color = "White";
        string name;
        int age{0};
};

class Snake: public Animal{
    public:
        int length{};
        void MakeSound(){
            cout << "Hissssssss!! \n";
        }
};

class Cat: public Animal{
    public:
        int height{};
        void MakeSound(){
            cout << "Meowww!! \n";
        }
};

int main(){
    Snake snake;

    snake.color = "Black";
    snake.name = "Arva";
    snake.age = 30;
    snake.MakeSound();

    Cat cat;
    cat.height = 32;
    cat.name = "Chutiya";
    cat.MakeSound();

    Cat cat2;
    cat2.height = 3;
    cat2.MakeSound();

}


