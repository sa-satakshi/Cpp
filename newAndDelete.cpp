#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p = NULL;
    p = new int;
    if(p == NULL){
        cout<<"Memory allocation failure";
        exit(1);
    }else{
        cout<<"Memory allocated";
        *p = 12;
        cout<<"Integer value stored is: "<<*p;
        delete p;
        cout<<"Memory deallocated";
    }
    return 0;
}