// You are using GCC
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, m;
    string arr1[100], arr2[100];
    cin>>n;
    for(int i = 0; i < n; i++){
        getline(cin,arr1[i]);
    }
    cin>>m;
    for(int i = 0; i < m; i++){
        getline(cin, arr2[i]);
    }
    
    cout<<"Catalog: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i];
    }
    for(int i = 0; i < m; i++){
        cout<<arr2[i]<<endl;
    }
    cout<<endl;
    
    return 0;
}