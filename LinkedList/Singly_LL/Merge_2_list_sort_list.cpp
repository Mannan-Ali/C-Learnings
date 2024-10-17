#include <iostream>

// Define a basic Node structure for the singly linked list
struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists
Node * mergeLinkedLists(Node *list1, Node *list2)
{
    // Create a dummy node to simplify the code
    Node dummy(0);
    Node *tail = &dummy;

    while (list1 && list2)
    {
        if (list1->data < list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // If one of the lists is empty, append the other
    if (list1)
    {
        tail->next = list1;
    }
    else
    {
        tail->next = list2;
    }

    return dummy.next;
}

// Function to print a linked list
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
    // Create two sorted linked lists
    Node *list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    printLinkedList(list1);

    Node *list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    printLinkedList(list2);

    // Merge the two linked lists
    Node *mergedList = mergeLinkedLists(list1, list2);

    // Print the merged linked list
    std::cout << "Merged Linked List: ";
    printLinkedList(mergedList);

    return 0;
}
