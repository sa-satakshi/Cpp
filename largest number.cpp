//wap to find the largest number almong 4 numbers
#include<iostream>
using namespace std;

int main(){

    int x, y, z, w;
    cout<<"Enter four numbers: ";
    cin>>x;
    cin>>y;
    cin>>z;
    cin>>w;

    if((x>y) & (x>z) & (x>w)){
        cout<<"x is greater"<<endl;
    }
    if((y>x) & (y>z) & (y>w)){
        cout<<"y is greater"<<endl;
    }
    if((z>y) & (z>x) & (z>w)){
        cout<<"z is greater"<<endl;
    }
    if((w>y) & (w>x) & (w>z)){
        cout<<"w is greater"<<endl;
    }
    return 0;

}