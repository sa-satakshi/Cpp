#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left = NULL;
    Node* right = NULL;
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
int main(){
    Node* root = NULL;
    int data;
    cin>>data;
    while(data != -1){
        cin>>data;
        insert(root, data);
    }
    return 0;
}