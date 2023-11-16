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
bool search(int x){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == x){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        insert(data);
    }
    display(data);
    int e;
    cin>>e;
    // display(data);
    if(search(e) == true){
        cout<<"Elememt found";
    }else{
        cout<<"Element not found";
    }

    return 0;
}