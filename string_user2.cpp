#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter the number of values: ";
    std::cin >> n;

    std::string stringArray[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> stringArray[i];
    }

    int intArray[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> intArray[i];
    }

    std::cout << "Merged array is :";
    for (int i = 0; i < n; ++i) {
        std::cout << " " << stringArray[i] << " " << intArray[i];
    }

    return 0;
}
     