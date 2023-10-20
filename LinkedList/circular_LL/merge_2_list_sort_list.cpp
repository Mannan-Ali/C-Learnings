#include <iostream>

// Define a basic Node structure for the circular singly linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted circular singly linked lists
Node* mergeCircularSinglyLinkedLists(Node* list1, Node* list2) {
    if (!list1) return list2;
    if (!list2) return list1;

    Node* tail1 = list1;
    while (tail1->next != list1) {
        tail1 = tail1->next;
    }

    Node* tail2 = list2;
    while (tail2->next != list2) {
        tail2 = tail2->next;
    }

    tail1->next = list2;
    tail2->next = list1;

    return (list1->data < list2->data) ? list1 : list2;
}

// Function to print a circular singly linked list
void printCircularSinglyLinkedList(Node* head) {
    if (!head) return;

    Node* current = head;
    
    do {
        std::cout << current->data << " -> ";
        current = current->next;
    } while (current != head);

    std::cout << " (Circular)" << std::endl;
}

int main() {
    // Create two sorted circular singly linked lists
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);
    list1->next->next->next = list1; // Make it circular

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);
    list2->next->next->next = list2; // Make it circular

    // Print the two input circular singly linked lists
    std::cout << "List 1: ";
    printCircularSinglyLinkedList(list1);

    std::cout << "List 2: ";
    printCircularSinglyLinkedList(list2);

    // Merge the two circular singly linked lists
    Node* mergedList = mergeCircularSinglyLinkedLists(list1, list2);

    // Print the merged circular singly linked list
    std::cout << "Merged Circular Singly Linked List: ";
    printCircularSinglyLinkedList(mergedList);

    return 0;
}
