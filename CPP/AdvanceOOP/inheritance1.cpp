#include <iostream>

class Animal{
    public:
        virtual void talk() const {std::cout << "Hello! \n";}
};

class Human : public Animal{
    public:
        void talk() const {std::cout << "Hello, I am a human \n";}
        void walk() const {std::cout << "Lets, walk!! \n";}
};

int main(){
    Animal animal;
    Human human;
    animal.talk();
    human.talk();
    human.walk();
}