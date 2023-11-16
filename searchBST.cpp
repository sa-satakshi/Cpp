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
    }else if(data  > root->data){
        root->right = insert(root->right, data);
    }
    return  root;
}
Node* search(Node* root, int key){
    if(root == NULL || root->data == key){
        return root;
    }
    if(root->data < key){
        return search(root->right, key);
    }else{
        return search(root->left, key);
    }
}

int main(){
    Node* root = NULL;
    int n, data;
    cout<<"Enter the number of roots: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        root = insert(root, data);
    }
    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    if(search(root, key) == NULL){
        cout<<key<<" not found"<<endl;
    }else{
        cout<<key<<" found"<<endl;
    }
    return 0;

}