#include <iostream>

using std::cout;

struct Day{
    public:
        int month{1};
        int year{2000};
        
        //-----setter
        void set_date(int d){
            this->day = d;
        }

        //-----Getter
        int get_date(){
            return this->day;
        }
    
    private:
        int day{1};
};


int main(){

    //create an instance
    Day date;

    //initialize the attributes
    date.set_date(11);
    date.month = 05;
    date.year = 1992;


    //test
    assert(date.get_date() == 11);
    assert(date.month == 05);
    assert(date.year == 1992);

    //-----prints
    cout << "All the assertions ran successfully!!" << "\n";

}