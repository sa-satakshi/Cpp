#include<iostream>
using namespace std; 

void merge(arr[n], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r-mid;

    int a[n1];
    int a[n2];    //temp arrays;

    for(int i = 0; i < n1; i++){
        arr[i] = arr[l+i];
    }
    for(int i = 0; i < n2; i++){
        arr[i] = arr[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int  k = l;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = arr[i];
            k++;
            i++;
        }else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(j < n1){
        arr[k] = arr[i];
            k++;
            i++;
    }
    while(j < n2){
        arr[k] = b[j];
            k++;
            j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr[9], l, mid);
        mergeSort(arr[9], mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main(){
    int arr[] = {5, 6, 2, 4, 5, 8, 8, 2, 1, 7};
    mergeSort(arr, 0 ,9);
    for(int i = 0; i < 9; i++){
        cout<<arr[i]<<" "
    }
    cout<<endl;
    return 0;
}