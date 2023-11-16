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
bool search(int elm){
    Node* temp = top;
    while(temp != NULL){
        if(temp->data == elm){
            return true;    
        }
        temp = temp->next;
    }return false;
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
    if(search(elm) == true){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
}