#include<iostream>
using namespace std;

int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    int num3;
    cin>>num3;
    
    if (num1>num2){
        if (num1>num3){
            cout<<num1<<endl;
        }else{
            cout<<num3<<endl;
        }
    }else if(num2>num1){
        if (num2>num3){
            cout<<num2<<endl;
        }else{
            cout<<num3<<endl;
        }
    }
    return 0;
}