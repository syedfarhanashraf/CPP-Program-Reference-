#include <iostream>

class parent_A{
    public:
        void Print(){
            std::cout << "I am in Parent_A" << "\n";
        }
};

class Child_B :virtual public parent_A{};

class Child_C :virtual public parent_A{};

class grand_child_D:public Child_B,public Child_C{};


int main(){
    parent_A p;
    p.Print();
    Child_B b;
    b.Print();
    Child_C c;
    c.Print();
    grand_child_D d;
    d.Print();
}