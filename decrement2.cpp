#include<iostream>
using namespace std;

int main(){

    int i =1, j=2, k=3;
          //1    //2   //3
    int n = i-- - j-- - k--;
          //0   //1    //2

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<n<<endl;
    return 0;
}