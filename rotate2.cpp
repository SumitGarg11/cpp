#include <iostream>
#include <bits/stdc++.h>

void rotateArray(int arr[], int n, int k) {
    k %= n; // Ensure k is within the range of array size
    if (k == 0) return; // No need to rotate

    // Reverse the entire array
    std::reverse(arr, arr + n);
    
    // Reverse the first k elements
    std::reverse(arr, arr + k);

    // Reverse the remaining elements
    std::reverse(arr + k, arr + n);
}

int main() {
    int arr[] = {12, 65, 34, 80, 38, 51, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate

    rotateArray(arr, n, k);

    std::cout << "Rotated Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
