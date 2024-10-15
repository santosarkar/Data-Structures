#include <iostream>
using namespace std;

// Define a node structure for the binary tree
struct Node {
    int data; // Data of the node
    Node* left; // Left child
    Node* right; // Right child

    // Constructor to initialize node
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to perform in-order traversal of the tree
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left); // Visit left child
        cout << root->data << " "; // Visit node
        inOrder(root->right); // Visit right child
    }
}

int main() {
    // Create the root node
    Node* root = new Node(1);
    root->left = new Node(2); // Add left child
    root->right = new Node(3); // Add right child
    root->left->left = new Node(4); // Add left child to the left child

    // Perform in-order traversal
    inOrder(root);

    return 0;
}
