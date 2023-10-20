#include <iostream>

// Define a basic Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to compare two doubly linked lists in the forward direction
bool compareDoublyLinkedListsForward(Node* list1, Node* list2) {
    while (list1 && list2) {
        if (list1->data != list2->data) {
            return false; // Lists are not equal
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    
    // If both lists are nullptr, they are equal
    return list1 == nullptr && list2 == nullptr;
}
void printLinkedList(Node *head)
{
    while (head)
    {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}


int main() {
    // Create two doubly linked lists
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->prev = list1;
    list1->next->next = new Node(3);
    list1->next->next->prev = list1->next;

    printLinkedList(list1);

    Node* list2 = new Node(1);
    list2->next = new Node(2);
    list2->next->prev = list2;
    list2->next->next = new Node(3);

    printLinkedList(list2);

    // Compare the two doubly linked lists in the forward direction
    bool areEqualForward = compareDoublyLinkedListsForward(list1, list2);
    
    // Find the tails of both lists for backward comparison
    Node* tail1 = list1;
    while (tail1->next) {
        tail1 = tail1->next;
    }

    Node* tail2 = list2;
    while (tail2->next) {
        tail2 = tail2->next;
    }

    std::cout << "Doubly Linked Lists are equal (Forward): " << std::boolalpha << areEqualForward << std::endl;
    
    return 0;
}
