#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    while(key<n){
        for(int i = 0; i < n; i++){
            arr[i] = arr[i +1];
            if(arr[i] == arr[key]){
                cout<<arr[i] = arr[i = key];
            }else{
                cout<<"Not found";
            }

        }
    }

}