#include<iostream>
using namespace std;

int sum(int n){
    int add = 0;
    for(int i = 1; i<= n; i++){
        add +=  i;
    }
    return add;
}

int main(){

    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}