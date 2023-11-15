#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if((marks < 90) & (marks > 70)){
        cout<<"Excellent";
    }
    else if((marks < 70) & (marks > 50)){
        cout<<"Good";
    }
    else if((marks < 50) & (marks > 40)){
        cout<<"Fail";
    }
    return 0;
}
