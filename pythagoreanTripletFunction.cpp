#include<iostream>
using namespace std;

bool triplet(int a, int b, int c){
    if(((a*a + b*b) == c*c) || ((a*a + c*c) == b*b) || ((c*c + b*b) == a*a)){
        return true;
    }else{
        return false;
    }
}

int main(){

    int n1, n2, n3;
    cin>>n1;
    cin>>n2;
    cin>>n3;

    if(triplet(n1,n2,n3)){
        cout<<"It is a triplet"<<endl;
    }else{
        cout<<"It is not a triplet"<<endl;
    }

    return 0;
}