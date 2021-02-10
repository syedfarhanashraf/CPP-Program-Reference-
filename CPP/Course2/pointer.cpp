#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void pointer_test(int* x);


int main(){
    int x{2};
    int * a {&x};
    vector v{100,200,300,400};
    pointer_test(a);

    cout << x << "\n \n \n";
    for(int elem : v){
        cout << elem << "\n";
    }


}

void pointer_test(int* x){
    *x = (*x) * 2;
    cout << *x << "\n\n\n";
}