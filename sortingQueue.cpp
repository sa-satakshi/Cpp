#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
Node* tail = NULL;
void insert(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(newNode){
        if(head == NULL && tail == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }else{
        cout<<"Queue Overflow";
    }
}
void sorting(int arr[], int n){
    sort(arr, arr+ n);
}
int main(){
    int n, arr[n];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        insert(i);
    }
    sorting(arr,n);
    for(int i = n-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
}
