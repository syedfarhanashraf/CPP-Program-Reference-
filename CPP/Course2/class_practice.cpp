class Person{
    public:
        Person(int d, int m, int y):day(d), month(m), year(y){}
    
    private:
        int day;
        int month;
        int year;
};

int main(){
    Person person(11,05,1992);
    Person person1(07,04,1989);
}