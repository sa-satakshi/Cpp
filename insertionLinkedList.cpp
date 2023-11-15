#include<iostream>
using namespace std;
struct node{
    struct node*prev;
    int data;
    struct node*next;
};
struct node *head = NULL, *temp;
int main(){
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    while(choice){
        struct node * newnode = new node();
        cout<<"Enter data: ";
        cin>>newnode->data;
        newnode->next =NULL;
        newnode->prev =NULL;
    if(head = newnode){
        head = newnode;
        temp = newnode;
    }else{
        temp -> next = newnode;
        newnode ->prev = temp;
        temp = newnode;
    }
    cout<<"Enter your choice: ";
    cin>>choice;
}
    temp = head;
    struct node * newnode = new node();
    cout<<"Enter data: ";
    cin>>newnode->data;
    temp->prev = newnode;
    temp = head = newnode;
    temp = head;
    cout<<"After Insertion: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    
}