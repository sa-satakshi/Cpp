#include <iostream>
using namespace std;

// Define a node structure
struct Node {
  int data;
  Node* prev;
  Node* next;
};

// Create a new node and return its pointer
Node* createNode (int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->prev = NULL;
  newNode->next = NULL;
  return newNode;
}

// Insert a node at the beginning of the list
void insertFront (Node** head, int data) {
  Node* newNode = createNode(data);
  if (*head == NULL) { // List is empty
    *head = newNode; // Make new node as head
  }
  else { // List is not empty
    newNode->next = *head; // Link new node with the head node
    (*head)->prev = newNode; // Link head node with the new node
    *head = newNode; // Make new node as head
  }
}

// Display the list from the head node
void displayList (Node* head) {
  Node* temp = head; // Start from the head node
  while (temp != NULL) { // Traverse the list until the end
    cout << temp->data << " "; // Print the data of the current node
    temp = temp->next; // Move to the next node
  }
  cout << endl;
}

int main () {
  Node* head = NULL; // Initialize head pointer as NULL
  int n, data; // Declare variables for number of nodes and data

  cout << "Enter the number of nodes: ";
  cin >> n; // Read the number of nodes

  for (int i = 0; i < n; i++) { // Loop to create n nodes
    cout << "Enter data for node " << i + 1 << ": ";
    cin >> data; // Read the data for the current node
    insertFront(&head, data); // Insert the node at the front of the list
  }

  cout << "The doubly linked list is: ";
  displayList(head); // Display the list from the head node

  return 0;
}
