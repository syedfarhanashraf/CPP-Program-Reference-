#include <cassert>

class Date{
    public:
        Date(int d, int m, int y):day(d),month(m),year(y){}
        int Day(){return day;}
        int Month(){return month;}
        int Year(){return year;}



    private:
        int day{1};
        int month{1};
        int year{1};
};


int main(){
    Date date(11,05,1992);
    assert(date.Day() == 11);
    assert(date.Month() == 05);
    assert(date.Year() == 1992);
}