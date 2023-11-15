#include<iostream>
using namespace std;

class B1{
    public:
        void show_data(){a
            cout<<"In the Base Class 1"<<endl;
        }
};

class B2{
    public:
        void show_data(){
            cout<<"In the base class 2"<<endl;
        }
};

class D: public B1,public B2{
    public:
    // void display(){
    //     B1::show_data();
    //     B2::show_data()
    // }
};

int main(){
    D ob;
    //ob.show_data;     //Ambiguity problem
    
    //solution
    ob.B1::show_data();
    ob.B2::show_data();           

    // or
    // ob.display();

    return 0;
}