#include<iostream>
using namespace std; 
class Operarion{
    int a, b, add;
    public:
    void get(){                             
        cout<<"Enter value 1: ";
        cin>>a;
        cout<<"Enter value 2: ";
        cin>>b;
    }
    void sum(){
        add = a+b;
    cout<<"Addition of two numbers: "<<a+b<<endl;
    }
}s;

int main(){
    s.get();
    s.sum();
    return 0;
}