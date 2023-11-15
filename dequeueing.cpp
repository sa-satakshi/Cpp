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
    newNode->data = x;
    newNode->next = NULL;
    if(head == NULL && tail == NULL){
        head = tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void dequeue(int data){
    if(head == NULL && tail == NULL){
        return;
    }else{
    Node* temp = head;
    head = head->next;
    cout<<temp->data<<" ";
    delete temp;
    }
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
    for(int i = 0; i < n; i++){
        cin>>data;
        insert(data);
    }
    dequeue(data);
    display();

}