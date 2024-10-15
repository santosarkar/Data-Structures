#include <iostream>
using namespace std;

// Function for binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is at mid
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore left half
        if (arr[mid] < key)
            left = mid + 1;
        // If key is smaller, ignore right half
        else
            right = mid - 1;
    }

    return -1; // Element not present
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    // Perform binary search
    int result = binarySearch(arr, size, key);

    // Print result
    if (result == -1)
        cout << "Element not present in array";
    else
        cout << "Element found at index " << result;

    return 0;
}
