#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Constructing base \n";
        }
        virtual ~Base(){
            cout<<"Destructing base \n";
        }
};
class Derived1: public Base{
    public:
        Derived1(){
            cout<<"Constructing Derived \n";
        }
        ~Derived1(){
            cout<<"Destructing Derived \n";
        }
};
int main(){
    Base *b = new Derived1;
    delete b;
    return 0;
}