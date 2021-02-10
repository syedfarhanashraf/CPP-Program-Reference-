
    // Add 3 private member variables to the class:
    //     Name
    //     Grade (e.g. 9th grade)
    //     Grade Point Average
    // Write a public constructor function to set the private attributes.
    // Create public member functions to set each of the member variables. Before setting the values verify that:
    //     Grade is from 0 (kindergarten) to 12
    //     GPA is from 0.0 to 4.0
    //     The function must either throw an exception if any of the invariants are violated
    // Within the main() (outside of the class), declare an object of type Student and test out each of the member function calls.


#include <iostream>
#include <cassert>
#include <stdexcept>
#include <string>
#include <vector>

class Student{
    private:
        std::string name;
        int grade;
        double GPA;
    public:
        Student(std::string n, int g, double gpa){
            Name(n);
            Grade(g);
            Grade_Average(gpa);

        }
        
        void String(){
            std::vector v {"January","February","March","April","May","June","July","August","September","October","November","December"};
            std::cout << name << " has grade: " << std::to_string(Grade()) << " and GPA: " << std::to_string(Grade_Average()) << "\n";
        }

        std::string Name() const{return name;}
        int Grade() const{return grade;}
        double Grade_Average() const{return GPA;}
        
        void Name(std::string & n){
            name = n;
        }
        void Grade(int g){
            if (g <= 12 && g > 0){
                grade = g;
            }
            else{
                throw std::invalid_argument("Invalid Grade");
            }
        }
        void Grade_Average(double gpa){
            if (gpa >= 0.0 && gpa <= 4.0){
                GPA = gpa;                   
            }
            else{
                throw std::invalid_argument("Invalid GPA");
            }
        }

};

int main(){
    Student Parikshit("Parikshit", 11, 3.5);
    std::cout << Parikshit.Grade() << " " << Parikshit.Name() << " " << Parikshit.Grade_Average() << "\n";
    bool caught{false};

    Parikshit.String();

    try{
        Parikshit.Grade(20);
    }
    catch(...){
        caught = true;
    }
    assert(caught);
    std::cout << "Done" << "\n";
}