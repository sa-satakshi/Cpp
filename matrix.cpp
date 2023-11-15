#include<iostream>
using namespace std;

int main(){
    int row1,col1;
    cin>>row1>>col1;
    int arr1[row1][col1];

    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cin>>arr1[i][j ];
        }
    }

    int row2,col2;
    cin>>row2>>col2;
    int arr2[row1][col1];

    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            cin>>arr2[i][j];
        }
    }

    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cout<<arr1[i][j]<<" ";
        }
    }
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            cout<<arr2[i][j]<<" ";
        }
    }


}