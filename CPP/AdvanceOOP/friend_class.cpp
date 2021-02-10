#include <iostream>

using std::cout;

class Heart{
    public:
        int beat_rate {80};
};

class Human : public Heart{
    public:
        void Exercise(int rate){
            beat_rate = rate;
        }
        int Exercise(){
            return beat_rate;
        }
};

int main(){
    Human human;
    human.Exercise(150);
    cout << human.Exercise() << "\n";
}