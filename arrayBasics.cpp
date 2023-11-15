#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        arr[1] = arr[i+1];
        arr[1] = 7;
    
    }
    for(int i = 0; i < 5; i++){
        cout<<arr[i];
    }
}