#include<iostream>
using namespace std;
//time complexity is O(logn)
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while (s <= e){
        int mid = (s+e)/2;

        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter number of array elements: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i <n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>key;
    cout<<binarySearch(arr, n , key);
    return 0;
}