#include <iostream>

// Define a basic Node structure for the singly linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to find the minimum value in a singly linked list
int findMinimumSinglyLinkedList(Node* head) {
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
    // Create a singly linked list
    Node* list = new Node(3);
    list->next = new Node(1);
    list->next->next = new Node(0);
    list->next->next->next = new Node(2);

    // Find the minimum value in the singly linked list
    int minVal = findMinimumSinglyLinkedList(list);

    std::cout << "Minimum value in the singly linked list: " << minVal << std::endl;

    return 0;
}
