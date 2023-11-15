#include<iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"I am member of class A"<<endl;
        }
};

class B: public A{
    public:
    void show(){
        cout<<"I am member of class B"<<endl;
    }
};

int main(){
    B ob;
    ob.show();
    ob.A::show();     //derived clsdd show() will be called
    return 0;
}