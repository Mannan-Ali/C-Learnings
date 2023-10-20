#include <iostream>

// Define a basic Node structure for the circular singly linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to compare two circular singly linked lists
bool compareCircularSinglyLinkedLists(Node* list1, Node* list2) {
    if (list1 == nullptr && list2 == nullptr) {
        return true; // Both empty lists are equal
    }

    if (list1 == nullptr || list2 == nullptr) {
        return false; // One list is empty while the other is not
    }

    Node* start1 = list1;
    Node* start2 = list2;

    do {
        if (list1->data != list2->data) {
            return false; // Lists are not equal
        }
        list1 = list1->next;
        list2 = list2->next;
    } while (list1 != start1 && list2 != start2);

    // If we have returned to the starting nodes, they are equal
    return list1 == start1 && list2 == start2;
}

void printLinkedList(Node *head)
{
    Node *current = head;
    if (current == nullptr) {
        std::cout << "Empty List" << std::endl;
        return;
    }
    
    do {
        std::cout << current->data << " -> ";
        current = current->next;
    } while (current != head);

    std::cout << " (Circular)" << std::endl;
}

int main() {
    // Create two circular singly linked lists
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(3);
    list1->next->next->next = list1; // Make it circular

    std::cout << "List 1: ";
    printLinkedList(list1);

    Node* list2 = new Node(1);
    list2->next = new Node(2);
    list2->next->next = new Node(0);
    list2->next->next->next = list2; // Make it circular

    std::cout << "List 2: ";
    printLinkedList(list2);

    // Compare the two circular singly linked lists
    bool areEqual = compareCircularSinglyLinkedLists(list1, list2);

    std::cout << "Circular Singly Linked Lists are equal: " << std::boolalpha << areEqual << std::endl;

    return 0;
}
