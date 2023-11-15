#include<iostream>
using namespace std;

int main(){
    int n1, n2, arr1[n1], arr2[n2];
    cout<<"enter a1";
    cin>>n1;
    for(int i = 0; i < n1; i++){
        cin>>arr1[n1];
    }    
    cout<<"enter a2";
    cin>>n2;
    for(int i = 0; i < n2; i++){
        cin>>arr1[n2];
    }

    int m1 = sizeof(arr1)/sizeof(arr1[0]);
    int m2 = sizeof(arr2)/sizeof(arr2[0]);

    int m3 = m1 + m2;
    int arr3[m3];

    for(int i = 0; i < m1; i++){
        arr3[i] = arr1[i];           //arr3[] = {1,2,3}
    }
    for(int i = 0; i < m2; i++){
        arr3[i] = arr2[i];     //arr3[3+0]
    }
    for(int i = 0; i < m3; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}