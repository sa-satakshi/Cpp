#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};

void insert(Node** head, int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if(*head != NULL){
        (*head)->prev = newNode;
    }
    (*head) = newNode;
    return;
}

void display(Node** head, Node** prev){
    cout<<"In forward direction: "<<endl;
    Node** temp = head;
    while(*temp != NULL){
        cout<<temp->data<<" ";
        *temp = *temp->next;
    }
    cout<<endl;
    cout<<"In backward direction: "<<endl;      
    while(*head->prev != NULL){
        *head = *head->prev;
    }
    while(*head != NULL){
        cout<<*head->data<<" ";
        *head = *head->next;
    }
    cout<<endl;
}


int main(){
    Node* head = NULL;
    int n, data;
    cout<<"Enter the no. of nodes: ";
    cin>>n;
    for(int  i = 0; i < n; i++){
        cout<<"Enter Elements: ";
        cin>>data;
        insert(&head, data);
    }
    cout<<"The doubly linked list is: ";
    display(&head, &prev);

    return 0;
}