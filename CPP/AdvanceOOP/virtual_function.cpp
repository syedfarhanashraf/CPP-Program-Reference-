#include <iostream>

class Animal{
    virtual void Speak() const = 0;
};

class Cat:public Animal{
    public:
        void Speak() const override{
            std::cout << "Meow!!" << "\n";
        }
};

class Human: public Animal{
    public:
        void Speak() const override{
            std::cout << "Hello!!" << "\n";
        }
};

int main(){
    Cat *c = new Cat;
    c->Speak();
    delete(c);
}