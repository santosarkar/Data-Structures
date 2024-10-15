#include <iostream>
#include <stack> // Include stack library
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Pop elements from the stack and print
    while (!s.empty()) {
        cout << s.top() << " "; // Print the top element
        s.pop(); // Remove the top element
    }

    return 0;
}
