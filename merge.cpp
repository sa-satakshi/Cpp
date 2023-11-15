// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int n, m, i, arr1[n], arr2[m];
    cin>>n;
    
    for(i = 0; i < n; i++){
        cin>>arr1[i];
    }
    cin>>m;
    for(i = 0; i < m; i++){
        cin>>arr2[i];
    }
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int m1 = sizeof(arr1)/sizeof(arr2[0]);
    
    int arr3 = n1 + m1;
    int arrMerge[arr3];
    for(int i = 0; i < n1; i++){
        arrMerge[i] = arr1[i];
    }
    for(int i = 0; i < m1; i++){
        arrMerge[n1+i] = arr2[i];
    }
    
    cout<<"Catalog:"<<endl;
    for(int  i = 0; i < arr3; i++){
        cout<<arrMerge[i]<<endl;
    }
    return 0;
}