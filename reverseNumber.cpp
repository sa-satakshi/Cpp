#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int reverse;
    while (n>0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n = n/10;
        lastDigit++;
    }
    cout<<reverse<<endl;
    
    return 0;
}