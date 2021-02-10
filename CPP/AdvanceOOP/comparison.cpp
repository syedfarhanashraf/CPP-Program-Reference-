#include <cassert>

template<typename T> T Max(T a, T b){return a > b ? a : b;}

int main(){
    assert(Max<int>(2,3)== 3);
    assert(Max<double>(2.343,323.23));
}