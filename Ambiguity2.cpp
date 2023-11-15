#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"I am a member of class A"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        cout<<"I am a member of class B"<<endl;
    }
};

int main(){
    B obj;
    obj.show();
    obj.A::show();
    return 0;
}