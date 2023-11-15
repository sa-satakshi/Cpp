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
Node* delete(Node* root, int key){
    if(key < root->data){
        root->left = delete(root->left, key);
    }else if(key > root->data){
        root->right = delete(root->right, key);
    }else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSucce(root->right);
        root->data = temp->data;
        root->right = delet(root->right, temp->key);
    }
    return root;
}
Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}
void inorder(Node* root){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = NULL;
    int n, data, key;
    cout<<"Enter the number of Nodes: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        insert(root, data);
    }
    cout<<"Enter the key to search: ";
    cin>>key;
    if(search(root, key) == NULL){
        cout<<key<<" not found";
    }else{
        cout<<key<<" found";
    }
    inorder(root);
    return 0;
}