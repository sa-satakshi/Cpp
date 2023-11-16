// You are using GCC
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<=n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     int temp[key];
//     for(int i = 0; i < n; i++){
//         arr[i] = arr[i++];
//     }
//     return 0;
// }
int main(){
    int n1,n2,arr[100],arr2[100];
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cin>>n2;
    for(int i=n2;i<n1;i++){
        for(int j=0;j<(n1-n2);j++){}
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[i];
    }
     for(int i=05
     ;i<n1;i++){
cout<<arr2[i]<<" ";
    }
}