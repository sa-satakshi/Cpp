#include <iostream>
using namespace std;

// Define the AVL Node struct
struct AVLNode {
    int key;
    AVLNode* left;
    AVLNode* right;
    int height;
};

// Function to get the height of a node
int getHeight(AVLNode* node) {
    if (node == nullptr)
        return 0;
    return node->height;
}

// Function to calculate the balance factor
int getBalanceFactor(AVLNode* node) {
    if (node == nullptr)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

// Function to rotate right
AVLNode* rotateRight(AVLNode* y) {
    AVLNode* x = y->left;
    AVLNode* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

// Function to rotate left
AVLNode* rotateLeft(AVLNode* x) {
    AVLNode* y = x->right;
    AVLNode* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

// Function to insert a node into the AVL tree
AVLNode* insert(AVLNode* root, int key) {
    if (root == nullptr) {
        AVLNode* newNode = new AVLNode;
        newNode->key = key;
        newNode->left = nullptr;
        newNode->right = nullptr;
        newNode->height = 1;
        return newNode;
    }

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    else
        return root;  // Duplicate keys are not allowed

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getBalanceFactor(root);

    // Left Heavy
    if (balance > 1) {
        if (key < root->left->key)  // Left-Left Case
            return rotateRight(root);
        if (key > root->left->key)  // Left-Right Case
        {
            root->left = rotateLeft(root->left);
            return rotateRight(root);
        }
    }

    // Right Heavy
    if (balance < -1) {
        if (key > root->right->key)  // Right-Right Case
            return rotateLeft(root);
        if (key < root->right->key)  // Right-Left Case
        {
            root->right = rotateRight(root->right);
            return rotateLeft(root);
        }
    }

    return root;
}

// Function to display the AVL tree in-order
void inOrderTraversal(AVLNode* root) {
    if (root == nullptr)
        return;

    inOrderTraversal(root->left);
    cout << root->key << " ";
    inOrderTraversal(root->right);
}

int main() {
    AVLNode* root = nullptr;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        root = insert(root, element);
    }

    cout << "In-order traversal of AVL tree: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
