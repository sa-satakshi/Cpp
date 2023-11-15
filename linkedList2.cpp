#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
struct Node *head, *temp;
int main(){
    int choice;
    cout<<"Enter your Choice (0,1): ";
    cin>>choice;
    while(choice){

        cout<<"Enter data: ";
        cin>>newnode->data;
        newnode->next = NULL;
    }
    if(head = NULL){
        head = temp = newnode;
    }else{
        temp->next = newnode;
    }
    cout<<"Do you want to continue: (0,1): ";
    cin>>choice;
    while(temp != NULL){
        cout<<temp ->next;
    }
    return 0;
}