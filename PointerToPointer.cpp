#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    cout<<*p<<endl;

    int **q = &p;
    cout<<*q<<endl;   //derefrencing once
    cout<<**q<<endl;  //derefrencing twice
    return 0;
}