/*
Create a function hello() that outputs, "Hello, World!"
Create a class Human.
Overload hello() by creating a function hello(Human human). This function should output, "Hello, Human!"
Create 2 more classes and use those classes to further overload the hello() function.
*/

#include <iostream>

void Hello(){
    std::cout << "Hello,World!" << "\n";
}

class Human{};
void Hello(Human human){std::cout << "Hello, Human!" << "\n";}

class Parikshit{};
void Hello(Parikshit rishi){std::cout << "Hello, Rishi!" << "\n";}

class Arva{};
void Hello(Arva arva){std::cout << "Hello, Arva!" << "\n";}

int main(){
    Hello();
    Parikshit parikshit;
    Hello(parikshit);
    Arva arva;
    Hello(arva);
}
