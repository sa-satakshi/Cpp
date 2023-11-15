#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;   //holds the address of next node
};

class LinkedList{
    private:
        Node *head, *tail;
    public:
        linked_list(){   //constructor
            head = NULL;
            tail = NULL;
        }
    void add_nodes(int n){
        Node *tmp = new Node;   // allocating the space required for a node by the new operator. ‘tmp’ points to a node
        tmp->data = n;     //We are giving a value to the ‘data’ of ‘tmp’ as passed to the function.
        tmp->next = NULL;
        
        if(head == NULL){
            head = tmp;
            tail = tmp;
        }else{   
            tail->next = tmp;     //If ‘head’ is not NULL, it means that we have a linked list and we just have to add the node at the end of the linked list
            tail = tail->next;
        }
    }
};

int main(){
    LinkedList a;
    a.add_nodes(1);
    a.add_nodes(2);
    return 0;
}