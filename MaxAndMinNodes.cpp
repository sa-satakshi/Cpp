#include<iostream>
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
        root->left = insert(root->right, data);
    }else if(data > root->data){
        root->right = insert(root->right, data);
    }
    return root;
}
Node* maxVal(Node* root){
    if(root == NULL){
        return root;
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}
Node* minVal(Node* root){
    if(root == NULL){
        return root;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}
//by default the nodes are in inorder
int main(){
    Node* root = NULL;
    int n, data;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        root = insert(root, data);
    }
    Node* maxnode = maxVal(root);
    if(maxnode != NULL){
        cout<<"Maximum value in BST is : "<<maxnode->data<<endl;
    }else{
        cout<<"BST is empty";
    }
    Node* minnode = minVal(root);
    if(minnode != NULL){
        cout<<"Minimum value of BST is: "<<minnode->data<<endl;
    }else{
        cout<<"BST id empty";
    }
    return 0;
}