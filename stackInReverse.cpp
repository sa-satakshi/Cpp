#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
    char arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(char x) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack overflow";
            return;
        }
        arr[++top] = x;
    }

    char pop() {
        if (top == -1) {
            cout << "Stack underflow";
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    void printReverse() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i];
        }
    }
};

int main() {
    Stack s;
    string str;
    cin>>str;

    for (char c : str) {
        s.push(c);
    }

    cout << "Stack: ";
    s.printReverse();

    return 0;
}
