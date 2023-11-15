#include<iostream>
using namespace std;

enum seasons{spring , summer = 4, autumn = 9, winter};
int main(){
    seasons s;
    //s= summer
    s= winter;
    // cout<<"Summer: "<<s<<endl;  output = 4
    cout<<"Winter: "<<s<<endl;

    return 0;
}