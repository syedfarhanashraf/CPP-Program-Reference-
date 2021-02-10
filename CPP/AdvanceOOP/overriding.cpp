#include <assert.h>
#include <string>

class Animal {
public:
  virtual std::string Talk() const = 0;
};

// TODO: Declare a class Dog that inherits from Animal
class Dog: public Animal{
    public:
        std::string Talk() const override{
            return "Woof";
        }
};

class Arva: public Dog{
    public:
        std::string Talk() const override{
            return "yO, I am a nibbi!!";
        }
};
int main() {

  Dog dog;
  assert(dog.Talk() == "Woof");

  Arva nibbi;
  assert(nibbi.Talk() == "yO, I am a nibbi!!");
}