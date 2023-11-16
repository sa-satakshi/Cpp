// Include the input/output library
#include <iostream>
// Use the standard namespace
using namespace std;

// Define a node structure for the linked list
struct Node {
  // Data field to store the value
  int data;
  // Pointer to the next node
  Node* next;
};

// Define a stack class using linked list
class Stack {
  // Private member variable to store the top node
  private:
    Node* top;
  // Public member functions to perform stack operations
  public:
    // Constructor to initialize the top node as NULL
    Stack() {
      top = NULL;
    }
    // Function to insert a new node at the top of the stack
    void push(int x);
    // Function to remove the top node from the stack
    void pop();
    // Function to return the value of the top node
    int peek();
    // Function to check if the stack is empty
    bool isEmpty();
    // Function to display the values of the stack nodes
    void display();
};

// Function definition for push operation
void Stack::push(int x) {
  // Create a new node dynamically and assign the value x
  Node* newNode = new Node;
  newNode->data = x;
  // Link the new node to the top node
  newNode->next = top;
  // Update the top node as the new node
  top = newNode;
}

// Function definition for pop operation
void Stack::pop() {
  // Check if the stack is empty
  if (isEmpty()) {
    // Display an error message and return
    cout << "Stack is empty.\n";
    return;
  }
  // Store the top node in a temporary variable
  Node* temp = top;
  // Update the top node as the next node
  top = top->next;
  // Delete the temporary node from memory
  delete temp;
}

// Function definition for peek operation
int Stack::peek() {
  // Check if the stack is empty
  if (isEmpty()) {
    // Display an error message and return -1 as an invalid value
    cout << "Stack is empty.\n";
    return -1;
  }
  // Return the value of the top node
  return top->data;
}

// Function definition for isEmpty operation
bool Stack::isEmpty() {
  // Return true if top is NULL, false otherwise
  return (top == NULL);
}

// Function definition for display operation
void Stack::display() {
  // Check if the stack is empty
  if (isEmpty()) {
    // Display an error message and return
    cout << "Stack is empty.\n";
    return;
  }
  // Store the top node in a temporary variable
  Node* temp = top;
  // Loop until temp reaches NULL
  while (temp != NULL) {
    // Print the value of temp 
    cout << temp->data << " ";
    // Move temp to the next node 
    temp = temp->next;
  }
  // Print a new line 
  cout << "\n";
}

// Main function to take user input and perform stack operations accordingly 
int main() {
  // Create a stack object 
  Stack s;
  // Declare variables for user input 
  int choice, x;

  // Repeat until user chooses to exit 
  do {
    // Display a menu of choices 
    cout << "Enter your choice:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peek\n";
    cout << "4. Display\n";
    cout << "5. Exit\n";
    // Take user input for choice 
    cin >> choice;

    // Perform different actions based on choice 
    switch (choice) {
      case 1: 
        // Prompt for a value to push 
        cout << "Enter a value to push: ";
        // Take user input for x 
        cin >> x;
        // Call push function with x as argument 
        s.push(x);
        break;
