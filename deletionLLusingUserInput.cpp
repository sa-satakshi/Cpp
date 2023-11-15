#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void push(node** root, int data){
    node* newnode= new node;
    newnode->data=data;
    newnode->next=(*root);
    *root=newnode;
}

void append(node** root,int data){
    node* newnode=new node;
    newnode->data=data;
    newnode->next=NULL;
    node* last=*root;
    if(*root==NULL){
        *root=newnode;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newnode;
}
void display(node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
node* newNode(int data){
    node* newnode= new node;
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void deletenode(node** root, int data){
    node* temp=*root, *prev;
    if(temp!=NULL && temp->data==data){
        *root=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=data){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    prev->next=temp->next;
    free(temp);
}

int main(){
    node* head= nullptr;
    int n,data;
    cout<<"enter number of elements to insert: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>data;
        push(&head,data);
    }
    display(head);
   int key;

    cout<<endl;
    display(head);
    cout<<"\enter key to delete element";
    cin>>key;
    deletenode(&head,key);
    display(head);
}