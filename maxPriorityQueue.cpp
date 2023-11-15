#include<iostream>
using namespace std;
struct Node{
    int data;
    int priority;
    Node* next;
};
Node* head = NULL;
void insert(int data, int priority){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;
    if(head == NULL || priority < head->priority){
        newNode->next = head;
        head = newNode;
    }else{
    Node* temp = head;
    while(temp->next != NULL && temp->next->priority <= priority){
        temp = temp->next;
    }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void display(){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<"Processing packets with priority "<<temp->priority<<" and data: Packet "<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int n, priority,data;
    int max;
    cin>> max;
    cin>>n;
    if(n <= max){
        for(int i = 0; i < n; i++){
            cin>>data;
            cout<<"Packet: ";
            cin>>priority;
            insert(data, priority);
        }
        cout<<"Processing packets based on priority: "<<endl;
        display();
        
    }
}