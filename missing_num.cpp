#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            result = mid;
            right = mid - 1;
        }
    }

    return (result != -1) ? arr[result] : -1;
}

int main() {
    int arr[] = {12, 24, 26, 27, 37, 41, 53};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 24;

    int smallestMissing = findSmallestMissing(arr, n, target + 1); // Adding 1 to target

    if (smallestMissing != -1) {
        cout << "Smallest missing number greater than " << target << ": " << smallestMissing << endl;
    } else {
        cout << "No missing number greater than " << target << " found." << endl;
    }

    return 0;
}
