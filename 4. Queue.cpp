#include <iostream>
#include <queue> // Include queue library
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;

    // Enqueue elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Dequeue elements and print
    while (!q.empty()) {
        cout << q.front() << " "; // Print the front element
        q.pop(); // Remove the front element
    }

    return 0;
}
