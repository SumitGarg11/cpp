#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Count non-zero elements
    int nonZeroCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            nonZeroCount++;
        }
    }

    // Create a new array to store non-zero elements
    int nonZeroArr[nonZeroCount];
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            nonZeroArr[index++] = arr[i];
        }
    }

    // Print the resulting array without zeros
    std::cout << "Array after removing zeros:\n";
    for (int i = 0; i < nonZeroCount; ++i) {
        std::cout << nonZeroArr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
