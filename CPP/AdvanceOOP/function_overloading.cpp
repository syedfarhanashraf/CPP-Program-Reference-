#include <cassert>
#include <string>

class Water{};
class Alcohol{};
class Coffee{};

class Parikshit{
    public:
        std::string condition{"Happy"};
        void Drink(Water water){condition = "Hydrated";}
        void Drink(Alcohol alcohol){condition = "Drizzy";}
        void Drink(Coffee coffee){condition = "Charged";}
};


int main(){
    Parikshit parikshit;
    assert(parikshit.condition == "Happy");
    parikshit.Drink(Water());
    assert(parikshit.condition == "Hydrated");
    parikshit.Drink(Alcohol());
    assert(parikshit.condition == "Drizzy");
    parikshit.Drink(Coffee());
    assert(parikshit.condition == "Charged");
}