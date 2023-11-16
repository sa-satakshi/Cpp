#include<iostream>
using namespace std;

int main(){

    //pointer to int os created, and pointing to some garbage address,bad practice, will show segmentation fault
    // int *p = 0;  
    // cout<<*p<<endl;

    int i = 5;
    // int *p = &i;   or
    int *p = 0;
    p = &i;

    cout<<p<<endl;  //prints address
    cout<<*p<<endl;  //prints value


    
    
   return 0;
}