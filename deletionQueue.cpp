#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
Node* tail = NULL;

void insert(int x){
    Node* newNode = new Node;
    newNode->data= x;
    newNode->next = NULL;
    if(head == NULL && tail == NULL){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeue(int x){
    if(head == NULL && tail == NULL){
        return;
    }
    if(head->data == x){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while(current->next != NULL && current->next->data != x){
        current = current->next;
    }
    if(current -> next != NULL){
        Node* toDelete = current->next;
        current->next = toDelete->next;
        delete toDelete;
    }
}

void display(int x){
    if(head == NULL && tail == NULL){
        cout<<"Queue is empty";
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int n, data;
    cout<<"Enter the number of elements to insert in queue: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        insert(data);
    }
    cout<<"Queue elements are: ";
    display(data);
    int e;
    cout<<"Enter element to delete: ";
    cin>>e;
    dequeue(e);
    display(data);
    return 0;
}
