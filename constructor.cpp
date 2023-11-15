#include<iostream>
using namespace std;

class A{
    A(int i){
        int id = i;
        cout<<"I am constructor"<<endl;
    }
    ~A(){
        cout<<"I am Destructor "<<endl;
    }
};

int main(){
    A (int i);
    a.id;
    
}