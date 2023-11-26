#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxHeapify(int heap[], int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[largest])
        largest = left;

    if (right < size && heap[right] < heap[largest])
        largest = right;

    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        maxHeapify(heap, size, largest);
    }
}

void buildMaxHeap(int heap[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        maxHeapify(heap, size, i);
    }
}

void insertElement(int heap[], int &size, int value) {
    heap[size++] = value;
}

void displayMaxHeap(int heap[], int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int heap[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, size, value);
    }

    buildMaxHeap(heap, size);
    displayMaxHeap(heap, size);

    return 0;
}
