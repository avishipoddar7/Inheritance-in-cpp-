//exp14d
//inheritance 
//hierarchical 

#include <iostream> 
using namespace std; 

class Animals {
public:
    string animal_1 = "Tiger";
    string animal_2 = "Dolphin";
    string animal_3 = "Crocodile";
}; 

class Habitat : public Animals {
public:
    string habitat_1 = "Land";
    string habitat_2 = "Water";
    string habitat_3 = "Land and Water";
};

class Food : public Animals {
public: 
    string food_1 = "Meat and flesh";     // for Tiger
    string food_2 = "Underwater food";    // for Dolphin
    string food_3 = "Fishes";             // for Crocodile
};

class Behaviour : public Animals { 
public: 
    string behaviour_1 = "Aggressive";
    string behaviour_2 = "Friendly";
    string behaviour_3 = "Dangerous";
};

int main() {
    Habitat h;
    Food f;
    Behaviour b;

    cout << h.animal_1 << " lives on " << h.habitat_1 
         << ", eats " << f.food_1 
         << ", and is " << b.behaviour_1 << "." << endl;

    cout << h.animal_2 << " lives in " << h.habitat_2 
         << ", eats " << f.food_2 
         << ", and is " << b.behaviour_2 << "." << endl;

    cout << h.animal_3 << " lives in " << h.habitat_3 
         << ", eats " << f.food_3 
         << ", and is " << b.behaviour_3 << "." << endl;

    return 0;
}

/*

OUTPUT 

Tiger lives on Land, eats Meat and flesh, and is Aggressive.
Dolphin lives in Water, eats Underwater food, and is Friendly.
Crocodile lives in Land and Water, eats Fishes, and is Dangerous.

*/
