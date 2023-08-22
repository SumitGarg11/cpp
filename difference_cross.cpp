#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int array1[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> array1[i];
    }

    int m;
    std::cin >> m;

    int array2[m];
    for (int i = 0; i < m; ++i) {
        std::cin >> array2[i];
    }

    int maxSize = (n > m) ? n : m;

    for (int i = 0; i < maxSize; ++i) {
        int element1 = (i < n) ? array1[i] : 0;
        int element2 = (i < m) ? array2[i] : 0;

        int difference = element1 - element2;

        if (i > 0) {
            std::cout << " ";
        }

        std::cout << difference;
    }

    return 0;
}
