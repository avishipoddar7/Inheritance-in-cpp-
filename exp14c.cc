//exp14c
//inheritance 
//multilevel --class derived from another derived class 

#include <iostream> 
using namespace std ; 

//class 1 
class hair_texture{
    public: 
    string texture = "Rough";
}; 
//class 2 inherited from class 2 
class hair_type : public hair_texture{
    public:
    string type = "Straight";
};
//class 3 inherited from class 2
class hair_style:public hair_type{
    public: 
    string style = "Layers";
};
int main(){
    hair_style hair ;

    cout << "Hair texture: " << hair.texture << endl;  
    cout << "Hair type: " << hair.type << endl;        
    cout << "Hair style: " << hair.style << endl;      

    return 0;
}

/*

OUTPUT 

Hair texture: Rough
Hair type: Straight
Hair style: Layers

*/