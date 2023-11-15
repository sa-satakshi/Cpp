#include<iostream>
using namespace std;
class demo{
    public:
    int x;
    void getdata(){
        cout<<"\nEnter the value";
        cin>>x;
    };
    void showdata(){
        cout<<"\nThe value is: "<<x;
    }; 
};
    int main(){
        demo d;
        d.getdata();
        d.showdata();
        return 0;
    }