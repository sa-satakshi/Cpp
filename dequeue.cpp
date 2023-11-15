#include<iostream>
#include<deque>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
Node* tail = NULL;
void insert(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL && tail == NULL){
        head = tail = newNode;
    }
        tail->next = newNode;
        tail = newNode;
    
}
void dequeue(int data){
    if(head == NULL){
        cout<<"Queue is emoty";
    }
    data = head->data;
    Node* temp = head;
    head= head->next;
    delete temp;
}
void display(){
    if(head == NULL && tail == NULL){
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    int n, data;
    cin>>n;
    for(int  i = 0; i < n; i++){
        cin>>data;
        insert(data);
    }
    dequeue(data);
    display();
}