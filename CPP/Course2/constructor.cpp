#include <cassert>
#include <iostream>

class Date{
    public:
        //---Constructor---//
        Date(int d,int m, int y){
            Day(d);
            Month(m);
            Year(y);
        }

        //---Setters(Mutators)----//
        void Day(int d){this-> day = d;}
        void Month(int m){this->month = m;}
        void Year(int y){this->year = y;}

        //----Getters(accessors)----//
        int Day(){return day;}
        int Month(){return month;}
        int Year(){return year;}

    private:
        int day{0};
        int month{0};
        int year{0};
};

int main(){
    Date date(11,5,1992);
    assert(date.Day() == 11);
    assert(date.Month() == 5);
    assert(date.Year() == 1992);
    std::cout << "Done!!" << "\n";
}