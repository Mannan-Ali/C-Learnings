#include <iostream>

// Define a basic Node structure for the circular singly linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to find the minimum value in a circular singly linked list
int findMinimumCircularSinglyLinkedList(Node* head) {
    if (head == nullptr) {
        std::cerr << "The list is empty." << std::endl;
        return -1; // Return a sentinel value indicating an error or empty list
    }

    int minVal = head->data;
    Node* current = head->next;
    
    do {
        if (current->data < minVal) {
            minVal = current->data;
        }
        current = current->next;
    } while (current != head);

    return minVal;
}

int main() {
    // Create a circular singly linked list
    Node* list = new Node(3);
    list->next = new Node(1);
    list->next->next = new Node(4);
    list->next->next->next = new Node(2);
    list->next->next->next->next = list; // Make it circular

    // Find the minimum value in the circular singly linked list
    int minVal = findMinimumCircularSinglyLinkedList(list);

    std::cout << "Minimum value in the circular singly linked list: " << minVal << std::endl;

    return 0;
}
