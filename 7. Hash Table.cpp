#include <iostream>
#include <unordered_map> // Include hash table library
using namespace std;

int main() {
    // Create an unordered map (hash table)
    unordered_map<string, int> hashTable;

    // Insert key-value pairs
    hashTable["apple"] = 50;
    hashTable["banana"] = 20;
    hashTable["orange"] = 30;

    // Access elements using the key
    cout << "Apple: " << hashTable["apple"] << endl;
    cout << "Banana: " << hashTable["banana"] << endl;

    return 0;
}
