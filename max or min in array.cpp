#include<iostream>
#include<climits>
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
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i <=n; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    cout<<"Max no. is "<<max<<endl;
    cout<<"Min no. is "<<min;

    // max = max(max,array[i]);
    // min = min(min,array[i])
    return 0;    
}