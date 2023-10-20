#include <iostream>

// Define a basic Node structure for the singly linked list
struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to compare two singly linked lists
bool compareSinglyLinkedLists(Node *list1, Node *list2)
{
    while (list1 && list2)
    {
        if (list1->data != list2->data)
        {
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

int main()
{
    // Create two singly linked lists
    Node *list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(3);

    printLinkedList(list1);

    Node *list2 = new Node(1);
    list2->next = new Node(2);
    list2->next->next = new Node(3);

    printLinkedList(list2);

    // Compare the two singly linked lists
    bool areEqual = compareSinglyLinkedLists(list1, list2);

    std::cout << "Singly Linked Lists are equal: " << std::boolalpha << areEqual << std::endl;

    return 0;
}
