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
void print(){
    cout<<"Front element: "<<head->data<<endl;
    cout<<"Rear element: "<<tail->data<<endl;
}
int main(){
    int n, data;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>data;
        insert(data);
    }
    print();
    return 0;

}