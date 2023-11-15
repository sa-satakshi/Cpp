#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;  //poin ter of node type

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
}
};


void InsertAtHead(Node* &head, int d){

    //new node created
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void InsertAtTail(Node* tail, int d){

    //new node created
    Node*temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

//traversing a linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtPosition(Node* &head, int position, int d){
    Node*temp = head;
    int cnt;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    //creating a node
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
}
int  main(){

    //creating new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail,15);
    InsertAtHead(head,12);
    InsertAtHead(head,13);
    InsertAtHead(head,14);
    print(head);
    InsertAtPosition(head, 3, 22);
    print(head);
    return 0;
}