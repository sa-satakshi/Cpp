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
        root->left = insert(root->left, data);
    }else if(data > root->data){
        root->right = insert(root->right, data);
    }
    return root;
}
int sum(Node* root){
    if(root == NULL){
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = NULL;
    int data;
    // cin>>data;
    while(true){
        cin>>data;
        if(data == -1){
            break;
        }
        root = insert(root, data);
    }
    inorder(root);
    int s = sum(root);
    cout<<"The sum of BST is: "<<s;
}