#include<iostream>
using namespace std;
int main(){
    int n1 = 1, n2 = 2, n3, number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<n1<<" "<<n2<<" ";
    for(int i = 2; i <= number; ++i){
        n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}