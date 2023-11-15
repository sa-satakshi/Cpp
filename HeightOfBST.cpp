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
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return max(leftheight, rightheight) +1;
}
int main(){
    Node* root = NULL;
    int n,data;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        root = insert(root, data);
    }
    cout<<"Post-order traversal: ";
    postorder(root);
    int h = height(root);
    cout<<"Height of the tree: "<<h-1;
    return 0;
}