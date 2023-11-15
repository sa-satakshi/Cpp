#include<iostream>
using namespace std;
class demo{
    int b;
    public:
    int x;
};
int main(){
    demo d;
    cout<<"Enter the value x: ";
    cin>>d.x;
    cout<<"\n Value of x is"<<d.x;
    return 0;
}