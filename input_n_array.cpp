#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX_ELEMENTS = 100000; // Maximum number of elements in the merged array

int main() {
    int m; // Number of arrays
    std::cin >> m;

    int mergedArray[MAX_ELEMENTS]; // Array to store merged elements
    int currentIndex = 0; // Current index in the merged array

    for (int i = 0; i < m; i++) {
        int n; // Size of the current array
        std::cin >> n;

        for (int j = 0; j < n; j++) {
            int element;
            std::cin >> element;
            mergedArray[currentIndex] = element;
            currentIndex++;
        }
    }
    std::sort(mergedArray,mergedArray+currentIndex);
    std::reverse(mergedArray,mergedArray+currentIndex);

    // Print the merged array
    for (int i = 0; i < currentIndex; i++) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
