#include <iostream>

int main() {
    int n; // Number of arrays
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int m; // Size of the current array
        std::cin >> m;

        int sum = 0; // To calculate the sum of array elements

        for (int j = 0; j < m; j++) {
            int element;
            std::cin >> element;
            sum += element;
        }

        int  average = sum / m; // Calculate the average
        std::cout << "avg " << i + 1 << ": " << average << std::endl;
    }

    return 0;
}

