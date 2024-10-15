#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct Node {
    int data; // Data of the node
    Node* next; // Pointer to the next node
};

// Function to print the linked list
void printList(Node* n) {
    while (n != nullptr) {
        cout << n->data << " ";
        n = n->next; // Move to the next node
    }
}

int main() {
    // Create three nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Initialize the nodes
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = nullptr;

    // Print the linked list
    printList(head);

    return 0;
}
