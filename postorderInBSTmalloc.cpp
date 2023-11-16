#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
struct Node* insert(int arr[], struct Node* root, int i, int n){
    if(i < n){
        struct Node* temp = newNode(arr[i]);
        root = temp;
        root->left = insert(arr, root->left, 2*i+1, n);
        root->right = insert(arr, root->right, 2*i+2, n);
    }
    return root;
}
void postOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    int n , i;
    cin>>n;
    int* arr = (int* )malloc(sizeof(int) * n);

    for(int i = 0; i <n; i++){
        cin>>arr[i];
    }
    struct Node* root = insert(arr,NULL,0,n);
    postOrder(root);
    return 0;
}
