//exp14a 
//inheritance ---> public,private,protected


//public mode 

#include <iostream>
using namespace std ;

//base class 
class vehicle {
    public:
    string brand = "Ford";
    void colour(){
        cout<<"Red!\n";
    }
};
//derived class 
class car : public vehicle {  // everything public in vehicle becomes public in car 
    public:
    string model ="Mustang";
};
int main(){
    car mycar ; //object of the class 
    cout<<"brand: "<<mycar.brand<<endl; //inherited from vehicle in public mode 
    cout<<"model: "<<mycar.model<<endl; //inherited from car 
    cout<<"colour: ";
    mycar.colour();

    return 0 ;

}
/*

OUTPUT

brand: Ford
model: Mustang
colour: Red!

 */
