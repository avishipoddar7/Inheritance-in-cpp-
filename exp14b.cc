//exp14b
//inheritance 
//multiple --class b and class c ... derived class a (child class)


#include <iostream>
using namespace std ; 

//base class 
class hospital{
    public: 
    string nearby = "Jupiter";
}; 
//base class 2
class doctor{
    public:
    string doc = " Dr.Sharma";
}; 
//base class 3
class doc_type {
    public : 
    string type = " Cardiologist";
}; 

// inherits from all three classes
class Specialist : public hospital, public doctor, public doc_type {    
};

int main() {
    Specialist sp;   

    cout << "Nearby Hospital: " << sp.nearby << endl;  
    cout << "Doctor: " << sp.doc << endl;  
    cout << "Specialization: " << sp.type << endl;  

    return 0;
}

/*

OUTPUT 

Nearby Hospital: Jupiter
Doctor:  Dr.Sharma
Specialization:  Cardiologist

*/

