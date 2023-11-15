#include<iostream>
using namespace std;

int main(){
    int n=6,i;
    int arr[n]={1,2,3,4,5,6};
    int index=2;
    for( i = index; i<=n; i++){
        arr[i] = arr[i+1];
        --i;
        
    }cout<<arr[i];
}
