#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top = NULL;
void push(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
void display(){
    Node* temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* top = NULL;
    int n, data;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        push(data);
    }
    display();
}