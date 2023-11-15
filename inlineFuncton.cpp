#include<iostream>
using namespace std; 
class Operarion{
    int a, b, add;
    public:
    void get(){                              //method 3: inline function inside the class
        cout<<"Enter first value: "<<endl;
        cin>>a;
        cout<<"Enter second value: "<<endl;
        cin>>b;
    }
    void sum();
}s;
inline void Operarion::sum(){             // method 1: inline function outside the class
    add = a+b;
    cout<<"Addition of two numbers: "<<a+b<<endl;
}
int main(){
    cout<<"Program using inline function"<<endl;
    s.get();
    s.sum();
    return 0;
}