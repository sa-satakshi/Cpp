#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top = NULL;
void insert(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}
void display(){
    if(top == NULL){
        cout<<"Stack Underflow";
    }
    Node* temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void todelete(int data){
    Node* temp = top;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == data){
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"Element not found";
        return;
    }
    if(prev == NULL){
        top = top->next;
    }else{
        prev->next = temp->next;
    }
    delete temp;
}
int main(){
    Node* next = NULL;
    int n, data;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        insert(data);
    }
    display();
    
    int elm;
    cin>>elm;
    todelete(elm);
    display();
}