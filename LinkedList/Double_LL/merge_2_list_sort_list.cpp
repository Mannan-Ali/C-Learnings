#include <iostream>

// Define a basic Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to merge two sorted doubly linked lists
Node* mergeDoublyLinkedLists(Node* list1, Node* list2) {
    Node dummy(0);
    Node* tail = &dummy;

    while (list1 && list2) {
        if (list1->data < list2->data) {
            tail->next = list1;
            list1->prev = tail;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2->prev = tail;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Attach any remaining nodes from list1 or list2
    if (list1) {
        tail->next = list1;
        list1->prev = tail;
    } else {
        tail->next = list2;
        list2->prev = tail;
    }

    return dummy.next;
}

// Function to print a doubly linked list forward
void printLinkedListForward(Node* head) {
    while (head) {
        std::cout << head->data << " <-> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to print a doubly linked list backward
void printLinkedListBackward(Node* tail) {
    while (tail) {
        std::cout << tail->data << " <-> ";
        tail = tail->prev;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Create two sorted doubly linked lists
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->prev = list1;
    list1->next->next = new Node(5);
    list1->next->next->prev = list1->next;

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->prev = list2;
    list2->next->next = new Node(6);
    list2->next->next->prev = list2->next;

    // Print the two input lists forward and backward
    std::cout << "List 1 forward: ";
    printLinkedListForward(list1);
   

    std::cout << "List 2 forward: ";
    printLinkedListForward(list2);
   

    // Merge the two doubly linked lists
    Node* mergedList = mergeDoublyLinkedLists(list1, list2);

    // Print the merged linked list forward and backward
    std::cout << "Merged Linked List forward: ";
    printLinkedListForward(mergedList);

    return 0;
}
