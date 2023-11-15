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
int main(){
    Node* root = NULL;
    int n, num,data;
    while(true){
    cin>>n;
    if(n == 3){
        break;
    }else{
    switch(n){
        case 1:
            cin>>num;
            for(int i = 0; i < num; i++){
                cin>>data;
                root = insert(root, data);
            }
        break;
        case 2:
            postorder(root);
        break;
        case 4:
        cout<<"Invalid choice";
        break;
    }
    }
    }

    return 0;
}