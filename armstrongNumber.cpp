#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int temp, sum = 0;
    temp = n;
    while(n > 0){
        int lastDigit = n%10;
        int cube = lastDigit*lastDigit*lastDigit;
        sum = sum + cube;
        n = n/10;
        lastDigit++;
        }
    if (sum == temp){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not Armstrong Number"<<endl;
    }

    return 0;
}