//exp14a
//inheritance ---> public, private, protected (Bike Example)

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:        // Accessible everywhere
    string brand = "Generic Bike";

protected:     // Accessible only in derived classes
    string fuel = "Petrol";

private:       // Accessible only inside Vehicle
    int year = 2024;   // Not directly accessible
};

// Derived class with PUBLIC inheritance
class Harley : public Vehicle {
public:
    string model = "Harley Davidson";

    void showDetails() {
        cout << "Brand: " << brand << endl;    // public --> public
        cout << "Model: " << model << endl;
        cout << "Fuel: " << fuel << endl;      // protected --> accessible inside
    }
};

// Derived class with PROTECTED inheritance
class RoyalEnfield : protected Vehicle {
public:
    string model = "Royal Enfield Meteor 350";

    void showDetails() {
        cout << "Brand: " << brand << endl;    // public --> becomes protected
        cout << "Model: " << model << endl;
        cout << "Fuel: " << fuel << endl;      // protected -->accessible inside
    }
};

// Derived class with PRIVATE inheritance
class Jawa : private Vehicle {
public:
    string model = "Jawa 42";

    void showDetails() {
        cout << "Brand: " << brand << endl;    // public --> becomes private
        cout << "Model: " << model << endl;
        cout << "Fuel: " << fuel << endl;      // protected --> becomes private
    }
};
int main() {
    // PUBLIC inheritance
    cout << "--- Public Inheritance (Harley) ---" << endl;
    Harley h;
    cout << "Brand: " << h.brand << endl;   // Allowed (brand is public)
    cout << "Model: " << h.model << endl;   // Model is public
    // cout << h.fuel;  // Error: fuel is protected

    // PROTECTED inheritance
    cout << "\n--- Protected Inheritance (Royal Enfield) ---" << endl;
    RoyalEnfield re;
    cout << "Model: " << re.model << endl;
    // cout << re.brand; // Error: brand is protected now
    // cout << re.fuel;  // Error: fuel is protected

    // PRIVATE inheritance
    cout << "\n--- Private Inheritance (Jawa) ---" << endl;
    Jawa j;
    cout << "Model: " << j.model << endl;
    // cout << j.brand; // Error: brand is private now
    // cout << j.fuel;  // Error: fuel is private

    return 0;
}
/*
Output
vbnet
Copy code
--- Public Inheritance (Harley) ---
Brand: Generic Bike
Model: Harley Davidson

--- Protected Inheritance (Royal Enfield) ---
Model: Royal Enfield Classic 350

--- Private Inheritance (Jawa) ---
Model: Jawa Perak

*/