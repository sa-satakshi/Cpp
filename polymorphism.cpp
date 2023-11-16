// polymorphism - many types
//type of polymorphism - compile time(function overloading, operator overloading), run time(virtual functions)

#include<iostream>
using namespace std;

class A{
public:
void fun(){
    cout<<"I am a function with no arguments"<<endl;
}
void fun(int x){
    cout<<"I am a function with int argument"<<endl;
}
void fun(double x){
    cout<<"I am a fcuntion with double argument"<<endl;
}
};

int main(){
    A obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;
}