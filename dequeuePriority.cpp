#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    int priotity;
    Node* next;
};
Node* head = NULL;
void enqueue(int data, int priority){
    Node* newNode= new Node;
    newNode->data = data;
    newNode->priotity= priority;
    newNode->next = NULL;
    if(head == NULL || priority < head->priotity){
        newNode->next = head;
        head = newNode;
    }else{
        Node* temp = head;
        while(temp->next != NULL && temp->next->priotity <= priority){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
// dequeue(int data){
//     if(head == NULL){
//         cout<<"Queue is emoty";
//     }
//     data = head->data;
//     Node* temp = head;
//     head= head->next;
//     delete temp;
//     return true;
// }
bool dequeuep(int priority){
    if(head== NULL){
        return false;
    }
    if(head->priotity == priority){
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    
    Node* current = head;
    while(current->next != NULL){
        if(current->next->priotity == priority){
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            return true;
        }
        current = current->next;
    }
    return false;
}
void display(){
    if(head == NULL){
        cout<<"Priority Queue is empty."<<endl;
    }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    

}
int main(){
    int n, data, priority;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        cin>>priority;
        enqueue(data, priority);
    }
    display();
    int e;
    // dequeue(e);
    // display();
    int p;
    cin>>p;
    dequeuep(p);
    display();
}