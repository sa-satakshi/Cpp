#include<iostream>
#include<deque>
using namespace std;
struct Node{
    int data;
    int priority;
    Node* next;
};
Node* head = NULL;
void enqueue(int data, int priority){
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
        cout<<"Priority Queue is empty"<<endl;
    }
    else{
        Node* temp = head;
        cout<<"Priority Queue elements are: ";
        while(temp != NULL){
            cout<<temp->data <<" (Priority "<<temp->priority<<")";
            temp = temp->next;
        }
        cout<<endl;
    }
}
int main(){
    int n, data, priority;
    cout<<"Enter number of queue elements: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        cin>>priority;
        enqueue(data, priority);
    }
    display();
    return 0;

}