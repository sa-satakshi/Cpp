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
void findDuplicates(Node* root, unordered_set<int>& seen, unordered_set<int>& duplicates) {
    if (root == nullptr) {
        return;
    }

    findDuplicates(root->left, seen, duplicates);

    if (seen.find(root->data) != seen.end()) {
        duplicates.insert(root->data);
    } else {
        seen.insert(root->data);
    }

    findDuplicates(root->right, seen, duplicates);
}

int main(){
    Node* root = NULL;
    cout<<"Number of nodes you want to enter: ";
    int n;
    cin>>n;
    int data;
    for(int i = 1; i <= n; i++){
        cin>>data;
        root = insert(root, data);
    }
    
    return 0;
}