#include <iostream>
using namespace std;

// Define a node structure for the Trie
struct TrieNode {
    TrieNode* children[26];
    bool isEndOfWord;

    // Constructor
    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

// Function to insert a word into the Trie
void insert(TrieNode* root, string key) {
    TrieNode* currentNode = root;

    for (char ch : key) {
        int index = ch - 'a';
        if (!currentNode->children[index])
            currentNode->children[index] = new TrieNode();
        currentNode = currentNode->children[index];
    }
    currentNode->isEndOfWord = true;
}

// Function to search for a word in the Trie
bool search(TrieNode* root, string key) {
    TrieNode* currentNode = root;

    for (char ch : key) {
        int index = ch - 'a';
        if (!currentNode->children[index])
            return false;
        currentNode = currentNode->children[index];
    }
    return currentNode->isEndOfWord;
}

int main() {
    TrieNode* root = new TrieNode();

    // Insert words
    insert(root, "hello");
    insert(root, "world");

    // Search for words
    cout << "hello: " << (search(root, "hello") ? "Found" : "Not Found") << endl;
    cout << "world: " << (search(root, "world") ? "Found" : "Not Found") << endl;

    return 0;
}
