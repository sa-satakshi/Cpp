#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head1 = NULL;
Node* tail1 = NULL;
Node* head2 = NULL;
Node* tail2 = NULL;
void insert(Node* head, Node* tail, int x){
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    if(head == NULL && tail == NULL){
        head = tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
bool compareQueues(Node* head1, Node* head2){
    while(head1 != NULL && head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        else{
            return true;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return(head1 == NULL && head2 == NULL);
}
int main(){
    int n1, data, n2;
    cin>>n1;
    for(int i = 0; i < n1; i++){
        cin>>data;
        insert(head1, tail1, data);
    }
    cin>>n2;
    for(int i = 0; i < n2; i++){
        cin>>data;
        insert(head1,tail2,data);
    }
    if(compareQueues(head1, head2)){
        cout<<"Queues are identical";
    }else{
        cout<<"Queues are different";
    }
    return 0;
}
