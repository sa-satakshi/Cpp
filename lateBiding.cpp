#include<iostream>
using namespace std;
class BC{
    public:
    virtual void show(){
        cout<<"\nshow() of base class"<<endl;
    }
};
class DC: public BC{
    public:
    void show(){
        cout<<"\nshow() of derived class"<<endl;
    }
};
int main(){
    BC *bptr;
    BC base;
    bptr = &base;
    cout<<"\n----Runtime Polymorphism----";
    cout<<"bptr points to base object\n";
    bptr->show();
    DC derived;
    bptr = &derived;
    cout<<"bptr now points to derived objects\n";
    bptr->show();
    return 0;
}