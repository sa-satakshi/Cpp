#include<iostream>
using namespace std;

int main(){
    int n, num, remainder, reversed=0;
    cout<<"Enter a number: ";
    cin>>n;
    num = n;

    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if(num == reversed){
        cout<<"Palindrome number";
    }else{
        cout<<"Not a palindrome number";
    }
    return 0;
}