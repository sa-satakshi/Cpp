#include<iostream>
using namespace std;

int main(){
    int i=1;
    int j=2;
    int b;

     //1 + //2 + //1 + //2 + //3 + //4 = 13
    b = i + j + i++ + j++ + ++i + ++j;
    cout<<b<<endl;

    return 0;
}