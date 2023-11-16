#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* createNode(int data){
    node* newnode=new node;
    newnode->data=data;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}

node* insertNode(node* root,int data){
    if(root==NULL){
        return createNode(data);
      
    }
    if(data<root->data){
        root->left=insertNode(root->left,data);
    }
    else{
        root->right=insertNode(root->right,data);
    }
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

int main(){
    node* root=NULL;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        root = insertNode(root,data);
    }
    inorder(root);
}

