#include <iostream>

// Define a basic Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to find the minimum value in a doubly linked list
int findMinimumDoublyLinkedList(Node* head) {
    if (head == nullptr) {
        std::cerr << "The list is empty." << std::endl;
        return -1; // Return a sentinel value indicating an error or empty list
    }

    int minVal = head->data;
    Node* current = head->next;

    while (current) {
        if (current->data < minVal) {
            minVal = current->data;
        }
        current = current->next;
    }

    return minVal;
}

int main() {
    // Create a doubly linked list
    Node* list = new Node(3);
    list->next = new Node(9);
    list->next->prev = list;
    list->next->next = new Node(4);
    list->next->next->prev = list->next;
    list->next->next->next = new Node(2);

    // Find the minimum value in the doubly linked list
    int minVal = findMinimumDoublyLinkedList(list);

    std::cout << "Minimum value in the doubly linked list: " << minVal << std::endl;

    return 0;
}
