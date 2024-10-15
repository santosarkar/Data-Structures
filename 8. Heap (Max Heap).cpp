#include <iostream>
#include <queue> // Include priority queue library
using namespace std;

int main() {
    // Max heap using priority queue
    priority_queue<int> maxHeap;

    // Insert elements
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    // Remove and print elements from max heap
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Print the largest element
        maxHeap.pop(); // Remove the largest element
    }

    return 0;
}
