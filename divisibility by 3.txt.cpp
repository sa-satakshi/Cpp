#include<iostream>
using namespace std;

int main(){
    int num = 0;
    for(num = 0; num<=100; num++){
        if(num % 3 ==0){
            continue;
        }
        cout<<num<<endl;
    }
    return 0;
}