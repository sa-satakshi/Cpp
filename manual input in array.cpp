#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    
    int array[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    cout<<"The array elements are: ";
    for(int i = 0; i < n; i++){
        cout<<array[i]<< " ";
    }
    return 0;    
}