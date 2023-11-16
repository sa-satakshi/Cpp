#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert(Node* head, int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = (*head);
    *head= newNode;
}
void append(Node** head, int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    Node* last = *head;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newNode;
}
void display(Node* temp){
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head = nullptr;
    int n;
    int data;
    cout<<"Enter number of elements to insert: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Enter element: ";
        cin>>data;
        // insert(&head, data);
        append(&head, data);
    }
    display(head);
}