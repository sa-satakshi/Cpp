#include<iostream>
#include<climits>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node* insert(Node* root, int data){
    if(root == NULL){
        return createNode(data);
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }else if(data > root->data){
        root->right = insert(root->right, data);
    }
    return root;
}
bool check(int arr[], int n){
    if( n == 0){
        return true;
    }
    int min = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            return false;
        }
        min = arr[i];
    }
    return true;
}

int main(){
    Node* root = NULL;
    cout<<"Number of nodes you want to enter: ";
    int n;
    cin>>n;
    int arr[n];
    int data;
    for(int i = 1; i <= n; i++){
        cin>>data;
        root = insert(root, data);
    }
    if(check(arr, n)){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}