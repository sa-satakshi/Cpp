//Arrays

//Searching of element in array
// #include<iostream>
// using namespace std;
// int main(){
//     int n, arr[n];
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin>>arr[n];
//     }
//     int item;
//     cin>>item;

//     int flag = 0;
//     for(int i = 0; i <= n; i++){
//         if(arr[i] == item){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 1){
//         cout<<"Item found";
//     }else{
//         cout<<"Item not found";
//     }
//     return 0;
// }

//Insertion
// #include<iostream>
// using namespace std;
// int main(){
//     int n, arr[n];
//     cin>>n;
//     for(int i = 0 ; i < n; i++){
//         cin>>arr[i];
//     }
//     int pos;
//     cin>>pos;
//     int element;
//     cin>>element;

//     if(pos < n && pos > 0){
//         for(int i = n; i > pos; i--){
//             arr[i] = arr[i-1];
//         }
//         arr[pos] = element;
//     }
//     for(int  i = 0; i <= n-1; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Deletion
// #include<iostream>
// using namespace std;
// int main(){
//     int n, arr[n] = {1,2,3,4,5};
//     // cin>>n;
//     // for(int i = 0; i < n ; i++){
//     //     cin>>arr[i];
//     // }
//     int elm;
//     cin>>elm;
//     int index = -1;

//     for(int i = 0; i < n; i++){
//         if(arr[i] == elm){
//             index = i;
//             break;
//         }
//     }
//     if(index != -1){
//         for(int i = index; i < n-1; i++){
//             arr[i] = arr[i+1];
//         }
//         for(int i = 0; i < n-1; i++){
//             cout<<arr[i];
//         }
//     }else{
//         cout<<"Element not found";
//     }
// }

//Linear search
// #include<iostream>
// using namespace std;
//time complexity is O(n)
// int linearSearch(int arr[], int n, int key){
//     for(int i = 0; i < n ;i++){
//         if(arr[i] == key){
//             return i;
//             }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter number of array elements: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array elements: "<<endl;
//     for(int i = 0; i <n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the element to be searched: "<<endl;
//     cin>>key;
//     cout<<linearSearch(arr, n , key);
//     return 0;
// }


//sum of array elements
// #include<iostream>
// using namespace std;
// int main(){
//     int n, arr[100];
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum = sum+arr[i];
//     }
//     cout<<sum;
//     return 0;
// }


//largest no. in array
// #include<iostream>
// using namespace std;
// int main(){
//     int n, arr[100];
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i = 0; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     } 
//     cout<<max;
// return 0;
// }





//LinkedList
//insert at start
// #include<iostream>
// using namespace std;
// struct Node{
//     int data ;
//     Node* next;
// };
// void insertAtBegin(Node* &head, int x){
//     Node* newNode = new Node;
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->next = head;
//     head = newNode;
// }
// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     Node*head = NULL;
//     insertAtBegin(head, 1);
//     insertAtBegin(head, 2);
//     insertAtBegin(head, 3);
//     display(head);
//     return 0;
// }


//insert at  end
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next = NULL;
// };
// void insertAtEnd(Node* &head, int x){
//     Node* newNode = new Node;
//     newNode->data = x;
//     newNode->next = NULL;
//     if(head == NULL){
//         head=newNode;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
//     void display(Node* head){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL";
//     }
// int main(){
//     Node* head = NULL;
//     insertAtEnd(head, 1);
//     insertAtEnd(head, 2);
//     insertAtEnd(head, 3);
//     display(head);
//     return 0;
// }


// insert at given position
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };
// void insertAtBegin(Node* &head, int x){
//     Node* newNode = new Node;
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->next = head;
//     head = newNode;
// }
// void insertAtPos(Node* head, int data, int pos){
//     Node* newNode = new Node;
//     newNode->data = data;
//     newNode->next = NULL;
//     Node* temp = head;
//     Node *prev=head;
//     for(int i=0;i<pos-1;i++){
//         temp=temp->next;
//     }
//     for(int i=0;i<pos-2;i++){
//         prev=prev->next;
//     }
//     prev->next=newNode;
//     newNode->next=temp;
// }
// void display(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     Node* head = NULL;
//     insertAtBegin(head,1);
//     insertAtBegin(head,2);
//     insertAtBegin(head,3);
//     display(head);
//     cout<<endl;
//     insertAtPos(head, 4, 2);
//     display(head);
//     return 0;
// }


// deletion
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };
// void insertAtBegin(Node* &head, int x){
//     Node* newNode = new Node;
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->next = head;
//     head = newNode;
// }
// void toDelete(Node* head, int x){
//     if(head == NULL){
//         return;
//     }
//     Node* temp = head;
//     while(temp->data!=x){
//         temp=temp->next;
//     }
//     temp->data=temp->next->data;
//     temp->next=temp->next->next;
    
// }
// void display(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     Node* head = NULL;
//     insertAtBegin(head,1);
//     insertAtBegin(head,2);
//     insertAtBegin(head,3);
//     display(head);
//     cout<<endl;
//     toDelete(head, 3);
//     display(head);
//     return 0;
// }


//updation
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };
// void insertAtBegin(Node* &head, int x){
//     Node* newNode = new Node;
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->next = head;
//     head = newNode;
// }
// void update(Node* head, int val, int newVal){
//     Node* temp = head;
//     while(temp->next != NULL){
//         if(temp->data == val){
//             temp->data = newVal;
//         }
//         temp= temp->next;
//     }
// }
// void display(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     Node* head = NULL;
//     insertAtBegin(head,1);
//     insertAtBegin(head,2);
//     insertAtBegin(head,3);
//     display(head);
//     cout<<endl;
//     update(head, 2, 4);
//     display(head);
// }



//userinput in singly linked list
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };
// void insert(Node** head, int data){
//     Node* newNode = new Node;
//     newNode->data = data;
//     newNode->next = (*head);
//     *head= newNode;
// }
// void append(Node** head, int data){
//     Node* newNode = new Node;
//     newNode->data = data;
//     newNode->next = NULL;
//     Node* last = *head;
//     if(*head == NULL){
//         *head = newNode;
//         return;
//     }
//     while(last->next != NULL){
//         last = last->next;
//     }
//     last->next = newNode;
// }
// void display(Node* temp){
//     while(temp!= NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     Node* head = nullptr;
//     int n;
//     int data;
//     cout<<"Enter number of elements to insert: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cout<<"Enter element: ";
//         cin>>data;
//         // insert(&head, data);
//         append(&head, data);
//     }
//     display(head);
// }

//stack
//operations
#include<iostream>
using namespace std;
class Stack{
    private:
        int top;
        int arr[100];
    public:
        Stack(){
            top = -1;
        }
    bool push(int x){
        if(top >= 100-1){
            cout<<"Stack is full"<<endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }
    int pop(){
        if(top < 0){
            cout<<"Stack Underflow";
            return 0;
        }
        return arr[top--];
    }
    int peek(){
        if(top < 0){
            cout<<"Stack is empty";
        }
        return arr[top];
    }
    bool isEmpty(){
        return(top < 0);
    }
    void display(){
        if(top < 0){
            cout<<"Stack is empty "<<endl;
            return;
        }
        cout<<"Stack elements: ";
        for(int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    cout<<"Create a stack objective: ";
    Stack s;
    cout<<"Check if stack is empty or not? ";
    cout<<s.isEmpty()<<endl;
    cout<<"\nInsert some elements onto the stack"<<endl;
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    cout<<endl;
    s.display();
    cout<<"Remove an element from the stack! ";
    cout<<s.pop()<<endl;;
    s.display();
    cout<<"\nTop element of stack: ";
    cout<<s.peek();
    cout<<endl;
    return 0;
    }

