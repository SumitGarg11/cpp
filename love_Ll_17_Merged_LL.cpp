#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}

Node* mergeAndSort(Node* left, Node* right) {
    if (left == NULL) return right;
    if (right == NULL) return left;

    Node* result = NULL;

    if (left->data <= right->data) {
        result = left;
        result->next = mergeAndSort(left->next, right);
    } else {
        result = right;
        result->next = mergeAndSort(left, right->next);
    }

    return result;
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int n1, n2;
    std::cout << "n1: ";
    std::cin >> n1;

    std::cout << "n2: ";
    std::cin >> n2;
    std::cout << std::endl;
    std::cout << "data for 1st LL: ";
    for (int i = 0; i < n1; i++) {
        int data1;
        std::cin >> data1;
        insertAtTail(head1, tail1, data1);
    }
    std::cout << "data for 2nd LL: ";

    for (int i = 0; i < n2; i++) {
        int data1;
        std::cin >> data1;
        insertAtTail(head2, tail2, data1);
    }
    std::cout << "1st LL: ";
    print(head1);
    std::cout << "2nd LL: ";
    print(head2);

    Node* mergedAndSorted = mergeAndSort(head1, head2);
    std::cout << "Merged and Sorted LL: ";
    print(mergedAndSorted);

    return 0;
}
