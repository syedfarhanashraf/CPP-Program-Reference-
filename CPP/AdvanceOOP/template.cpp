#include <iostream>

template<typename T>

T Max(T num1, T num2){
    return num1 > num2 ? num1:num2;
}

int main(){
    std::cout << Max<int> (3,2) << "\n";
}