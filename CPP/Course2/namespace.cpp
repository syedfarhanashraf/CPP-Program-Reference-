#include <iostream>

namespace English{
    void Hello(){std::cout << "Hello, how are you?? \n";}
}

namespace Spanish{
    void Hello(){std::cout << "Hola, Senor!, como estas? \n Muchas Gracias!! \n";}
}

int main(){
    English::Hello();
    Spanish::Hello();
}