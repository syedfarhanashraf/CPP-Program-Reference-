// #include <vector>
// #include <iostream>
// #include <cassert>

// class Matrix{
//     public:
//         Matrix(int rows, int columns): rows_(rows), columns_(columns), elements_(rows * columns){};
//         int& operator()(int row, int column){
//             return elements_[row * columns_ + column];
//         }
//         int operator()(int row, int column) const{
//             return elements_[row * columns_ + column];
//         }
//     private:
//         int rows_{0};
//         int columns_{0};
//         std::vector<int> elements_;       
// };

// int main(){
//     Matrix matrix(2,2);
//     matrix(1,0) = 4;
//     std::cout << matrix(1,0) << "\n";
// }

#include <iostream>
#include <cassert>
#include <vector>

class Matrix{
    public:
        Matrix(int row, int column): rows_(row), columns_(column), elements_(row * column){}
        int& operator()(int row, int column){
            return elements_[row * columns_ + column];
        }
        int operator()(int row, int column) const{
            return elements_[row * columns_ + column];
        }
    
    private:
        int rows_{0};
        int columns_{0};
        std::vector<int> elements_;
};


int main(){
    Matrix matrix(2,2);
    matrix (0,0) = 1;
    matrix (0, 1) = 2;
    std::cout << matrix(0,0) << "\n" << matrix(0,1) << "\n" << matrix(1,0) << "\n";
}