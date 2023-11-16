#include<iostream>
#include<string>
using namespace std;
struct Node{
    string data;
    int priority;
    Node* next;
};
Node* head = NULL;
void insert(string data, int priority){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;
    if(head == NULL || priority < head->priority){
        newNode->next = head;
        head = newNode;
    }else{
        Node* temp = head;
        while(temp != NULL && temp->next->priority >= temp->priority){
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}
void display(){
    if(head == NULL){
        cout<<"Error: Queue is empty.";
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<"Patient with priority "<<temp->priority<<" and name "<<temp->data<<" has been treated"<<endl;
        temp = temp->next;
    }
}
int main(){
    int n, choice, priority;
    string data;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
                cin>>priority;
                cin>>data;
                insert(data, priority);
                break;
            case 2:
            // int h;
                display();
                break;
            case 0:
                break;
            default:
                cout<<"invalid choice: ";
                break;
        }
    }        
    return 0;
}

