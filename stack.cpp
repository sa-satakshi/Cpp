//Push(STACL, TOP, mAXSTK, ITEM)
//1)[Stack already filled?]
//If Top  = MAXSTK, then: Print: OVERFLOW and Return.
// 2) Set TOP = TOP + 1[Increase Top by 1]
// 3) Set STACK[TOP] = ITEM. [Insert Item into the top]
// Return;


//POP(STACK, TOP, ITEM)
//1) Set ITEM


#include<iostream>
using namespace std;
#define N 5
int top = -1;
int stack[N];
void push(){
    if(top == N-1){
        cout<<"Stack is Overflow"<<endl;
    }else{
        int x;
        cout<<"Enter data in stack: ";
        cin>>x;
        top = top + 1;
        stack[top] = x;
    }
}
void pop(){
    if(top == -1){
        couT<<"Stack is Underflow: "<<endl;
    }else{
        int item = stack[top];
        top = top-1;
        cout<<item<<" is deleted from stack: "<<endl; 
    }
}
void display(){
    if(top == -1){
        cout<<"Stack is Underflow: "<<endl;
    }
}

int n;
cout<<"ENter 1 to start program: "