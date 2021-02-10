#include <iostream>
#include <cassert>



class Date{
    public:
        
        //---Getters(accessors)----//
        int Day(){return day;}
        int Month(){return month;}
        int Year(){return year;}

        //---Setters(mutators)----//
        void Day(int d){
            if (d > 0 && d <= 31) day = d;
        }
        void Month(int m){
            if (m > 0 && m <= 12) month = m;
        }
        void Year(int y){year = y;}
        
    
    private:
        int day{0};
        int month{0};
        int year{0};
};

int main()
{
    Date date;
    date.Day(-1);
    date.Month(14);
    date.Year(2000);
    assert(date.Day() != -1);
    assert(date.Month() != 14);
    assert(date.Year() == 2000);
}