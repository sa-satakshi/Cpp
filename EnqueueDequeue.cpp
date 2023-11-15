#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
Node* tail = NULL;
void enqueue(int x){
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    if(head == NULL && tail == NULL){
        head = tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<"Print jobs with "<< x <<"pages enqueued";
}
void dequeue(){
    if(head == NULL && tail == NULL){
        return;
    }else{
        Node* temp = head;
        head = head->next;
        cout<<"Processing print job: "<<temp->data<<" pages";
        delete temp;
    }

}
void display(){
    if(head == NULL && tail == NULL){
        cout<<"Queue is empty";
    }
    Node* temp = head;
    cout<<"Print job with in the queue: ";
    while(temp != NULL){
        cout<<temp->data<<" pages";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int input, n;
    while(true){
    cin>>input;
    switch(input){
        case 1:
            cin>>n;
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
        cout<<"Invalid option";
    }
    }
    return 0;
}