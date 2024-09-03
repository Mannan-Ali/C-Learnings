// #include <stdio.h>

// int binary_search(int a, int arrya[], int num) {
//     int start = 0;
//     int end = a - 1;
//     while (start <= end) {
//         int mid = (start + end) / 2;
//         if (arrya[mid] == num) {
//             return mid;
//         } else if (arrya[mid] < num) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int n;
//     printf("Enter Size of array : ");
//     scanf("%d", &n);
//     printf("Enter Elements : ");
//     int values[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &values[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", values[i]);
//     }
//     printf("\n");
//     int element;
//     printf("Enter the element to be searched: ");
//     scanf("%d", &element);
//     printf("%d\n", binary_search(n, values, element));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *head = NULL;

// // Function to create a new node
// struct Node *createNode(int data)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert a node at the beginning
// void insertAtBeginning(int data)
// {
//     struct Node *newNode = createNode(data);
//     newNode->next = head;
//     head = newNode;
// }

// // Function to insert a node at the end
// void insertAtEnd(int data)
// {
//     struct Node *newNode = createNode(data);
//     if (head == NULL)
//     {
//         head = newNode;
//     }
//     else
//     {
//         struct Node *temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// // Function to delete a node by value
// void deleteNode(int data)
// {
//     struct Node *temp = head;
//     if (temp == NULL)
//     {
//         printf("List is empty.\n");
//         return;
//     }
//     if (temp->data == data)
//     {
//         head = temp->next;
//         free(temp);
//         return;
//     }
//     while (temp->next != NULL)
//     {
//         if (temp->next->data == data)
//         {
//             struct Node *toDelete = temp->next;
//             temp->next = toDelete->next;
//             free(toDelete);
//             return;
//         }
//         temp = temp->next;
//     }
//     printf("Element not found in the list.\n");
// }

// // Function to print the linked list
// void displayList()
// {
//     struct Node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     int choice, data;

//     while (1)
//     {
//         printf("\nLinked List Operations:\n");
//         printf("1. Insert at the beginning\n");
//         printf("2. Insert at the end\n");
//         printf("3. Delete a node by value\n");
//         printf("4. Display the linked list\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter data to insert at the beginning: ");
//             scanf("%d", &data);
//             insertAtBeginning(data);
//             break;
//         case 2:
//             printf("Enter data to insert at the end: ");
//             scanf("%d", &data);
//             insertAtEnd(data);
//             break;
//         case 3:
//             printf("Enter data to delete: ");
//             scanf("%d", &data);
//             deleteNode(data);
//             break;
//         case 4:
//             displayList();
//             break;
//         case 5:
//             exit(0);
//         default:
//             printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
//     struct Node *prev;
// };

// struct Node *head = NULL;

// // Function to create a new node
// struct Node *createNode(int data)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     return newNode;
// }

// // Function to insert a node at the beginning
// void insertAtBeginning(int data)
// {
//     struct Node *newNode = createNode(data);
//     if (head == NULL)
//     {
//         head = newNode;
//     }
//     else
//     {
//         newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//     }
// }

// // Function to insert a node at the end
// void insertAtEnd(int data)
// {
//     struct Node *newNode = createNode(data);
//     if (head == NULL)
//     {
//         head = newNode;
//     }
//     else
//     {
//         struct Node *temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->prev = temp;
//     }
// }

// // Function to delete a node by value
// void deleteNode(int data)
// {
//     struct Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == data)
//         {
//             if (temp->prev != NULL)
//             {
//                 temp->prev->next = temp->next;
//             }
//             else
//             {
//                 head = temp->next;
//             }
//             if (temp->next != NULL)
//             {
//                 temp->next->prev = temp->prev;
//             }
//             free(temp);
//             return;
//         }
//         temp = temp->next;
//     }
//     printf("Element not found in the list.\n");
// }

// // Function to display the linked list forward
// void displayForward()
// {
//     struct Node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d <-> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Function to display the linked list backward
// void displayBackward()
// {
//     struct Node *temp = head;
//     if (temp == NULL)
//         return;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     while (temp != NULL)
//     {
//         printf("%d <-> ", temp->data);
//         temp = temp->prev;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     int choice, data;

//     while (1)
//     {
//         printf("\nDoubly Linked List Operations:\n");
//         printf("1. Insert at the beginning\n");
//         printf("2. Insert at the end\n");
//         printf("3. Delete a node by value\n");
//         printf("4. Display the list forward\n");
//         printf("5. Display the list backward\n");
//         printf("6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter data to insert at the beginning: ");
//             scanf("%d", &data);
//             insertAtBeginning(data);
//             break;
//         case 2:
//             printf("Enter data to insert at the end: ");
//             scanf("%d", &data);
//             insertAtEnd(data);
//             break;
//         case 3:
//             printf("Enter data to delete: ");
//             scanf("%d", &data);
//             deleteNode(data);
//             break;
//         case 4:
//             displayForward();
//             break;
//         case 5:
//             displayBackward();
//             break;
//         case 6:
//             exit(0);
//         default:
//             printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_SIZE 10

// int stack[MAX_SIZE];
// int top = -1;

// // Function to push an element onto the stack
// void push(int item)
// {
//     if (top == MAX_SIZE - 1)
//     {
//         printf("Stack overflow\n");
//         return;
//     }
//     stack[++top] = item;
// }

// // Function to pop an element from the stack
// void pop()
// {
//     if (top == -1)
//     {
//         printf("Stack underflow\n");
//         return;
//     }
//     printf("Popped element: %d\n", stack[top--]);
// }

// // Function to display the elements in the stack
// void display()
// {
//     if (top == -1)
//     {
//         printf("Stack is empty\n");
//         return;
//     }
//     printf("Stack elements: ");
//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int choice, item;

//     while (1)
//     {
//         printf("\nStack Operations (Array):\n");
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter element to push: ");
//             scanf("%d", &item);
//             push(item);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("Invalid choice. Please try again.\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct StackNode
// {
//     int data;
//     struct StackNode *next;
// };

// struct StackNode *top = NULL;

// // Function to push an element onto the stack
// void push(int item)
// {
//     struct StackNode *newNode = (struct StackNode *)malloc(sizeof(struct StackNode));
//     newNode->data = item;
//     newNode->next = top;
//     top = newNode;
// }

// // Function to pop an element from the stack
// void pop()
// {
//     if (top == NULL)
//     {
//         printf("Stack underflow\n");
//         return;
//     }
//     struct StackNode *temp = top;
//     top = top->next;
//     printf("Popped element: %d\n", temp->data);
//     free(temp);
// }

// // Function to display the elements in the stack
// void display()
// {
//     if (top == NULL)
//     {
//         printf("Stack is empty\n");
//         return;
//     }
//     printf("Stack elements: ");
//     struct StackNode *temp = top;
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     int choice, item;

//     while (1)
//     {
//         printf("\nStack Operations (Linked List):\n");
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter element to push: ");
//             scanf("%d", &item);
//             push(item);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #define MAX_SIZE 10

// int queue[MAX_SIZE];
// int front = -1, rear = -1;

// // Function to enqueue an element
// void enqueue(int item) {
//     if (rear == MAX_SIZE - 1) {
//         printf("Queue is full. Enqueue not possible.\n");
//         return;
//     }
//     if (front == -1) {
//         front = 0;
//     }
//     queue[++rear] = item;
// }

// // Function to dequeue an element
// void dequeue() {
//     if (front == -1) {
//         printf("Queue is empty. Dequeue not possible.\n");
//         return;
//     }
//     printf("Dequeued element: %d\n", queue[front]);
//     if (front == rear) {
//         front = rear = -1;
//     } else {
//         front++;
//     }
// }

// // Function to display the elements in the queue
// void display() {
//     if (front == -1) {
//         printf("Queue is empty.\n");
//         return;
//     }
//     printf("Queue elements: ");
//     for (int i = front; i <= rear; i++) {
//         printf("%d ", queue[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int choice, item;

//     while (1) {
//         printf("\nQueue Operations (Array):\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter element to enqueue: ");
//                 scanf("%d", &item);
//                 enqueue(item);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>

// struct QueueNode {
//     int data;
//     struct QueueNode* next;
// };

// struct QueueNode* front = NULL;
// struct QueueNode* rear = NULL;

// // Function to enqueue an element
// void enqueue(int item) {
//     struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
//     newNode->data = item;
//     newNode->next = NULL;
//     if (rear == NULL) {
//         front = rear = newNode;
//     } else {
//         rear->next = newNode;
//         rear = newNode;
//     }
// }

// // Function to dequeue an element
// void dequeue() {
//     if (front == NULL) {
//         printf("Queue is empty. Dequeue not possible.\n");
//         return;
//     }
//     struct QueueNode* temp = front;
//     printf("Dequeued element: %d\n", temp->data);
//     front = front->next;
//     free(temp);
//     if (front == NULL) {
//         rear = NULL;
//     }
// }

// // Function to display the elements in the queue
// void display() {
//     if (front == NULL) {
//         printf("Queue is empty.\n");
//         return;
//     }
//     printf("Queue elements: ");
//     struct QueueNode* temp = front;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main() {
//     int choice, item;
//     while (1) {
//         printf("\nQueue Operations (Linked List):\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter element to enqueue: ");
//                 scanf("%d", &item);
//                 enqueue(item);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// // Structure for a binary tree node
// struct TreeNode {
//     int data;
//     struct TreeNode* left;
//     struct TreeNode* right;
// };
// // Function to create a new binary tree node
// struct TreeNode* createNode(int data) {
//     struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }
// // Function to perform Inorder traversal
// void inorderTraversal(struct TreeNode* root) {
//     if (root == NULL) {
//         return;
//     }
//     inorderTraversal(root->left);
//     printf("%d ", root->data);
//     inorderTraversal(root->right);
// }
// // Function to perform Preorder traversal
// void preorderTraversal(struct TreeNode* root) {
//     if (root == NULL) {
//         return;
//     }
//     printf("%d ", root->data);
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
// }
// // Function to perform Postorder traversal
// void postorderTraversal(struct TreeNode* root) {
//     if (root == NULL) {
//         return;
//     }
//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     printf("%d ", root->data);
// }
// int main() {
//     struct TreeNode* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);

//     printf("Inorder Traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     printf("Preorder Traversal: ");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Postorder Traversal: ");
//     postorderTraversal(root);
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// #define MAX_VERTICES 100

// // Define a graph as an adjacency list
// int graph[MAX_VERTICES][MAX_VERTICES];
// int numVertices;

// // Function to add an edge to the graph
// void addEdge(int u, int v) {
//     graph[u][v] = 1;
//     graph[v][u] = 1; // For an undirected graph
// }

// // Function for Breadth-First Search (BFS)
// void bfs(int start) {
//     bool visited[MAX_VERTICES] = {false};
//     int queue[MAX_VERTICES];
//     int front = 0, rear = -1;

//     queue[++rear] = start;
//     visited[start] = true;

//     printf("BFS traversal starting from node %d: ", start);

//     while (front <= rear) {
//         int node = queue[front++];
//         printf("%d ", node);

//         for (int i = 0; i < numVertices; i++) {
//             if (graph[node][i] == 1 && !visited[i]) {
//                 queue[++rear] = i;
//                 visited[i] = true;
//             }
//         }
//     }

//     printf("\n");
// }

// int main() {
//     printf("Enter the number of vertices: ");
//     scanf("%d", &numVertices);

//     for (int i = 0; i < numVertices; i++) {
//         for (int j = 0; j < numVertices; j++) {
//             graph[i][j] = 0;
//         }
//     }

//     int numEdges;
//     printf("Enter the number of edges: ");
//     scanf("%d", &numEdges);

//     printf("Enter the edges (u v):\n");
//     for (int i = 0; i < numEdges; i++) {
//         int u, v;
//         scanf("%d %d", &u, &v);
//         addEdge(u, v);
//     }

//     int startNode;
//     printf("Enter the starting node: ");
//     scanf("%d", &startNode);

//     bfs(startNode);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// #define MAX_VERTICES 100

// int graph[MAX_VERTICES][MAX_VERTICES];
// int numVertices;

// void addEdge(int u, int v) {
//     graph[u][v] = 1;
//     graph[v][u] = 1; // For an undirected graph
// }

// void dfs(int node, bool visited[]) {
//     visited[node] = true;
//     printf("%d ", node);

//     for (int i = 0; i < numVertices; i++) {
//         if (graph[node][i] == 1 && !visited[i]) {
//             dfs(i, visited);
//         }
//     }
// }

// int main() {
//     numVertices = 7; // Number of vertices in the graph

//     // Initialize the graph (sample graph)
//     addEdge(0, 1);
//     addEdge(0, 2);
//     addEdge(1, 3);
//     addEdge(1, 4);
//     addEdge(2, 5);
//     addEdge(2, 6);

//     int startNode = 0; // Starting node for DFS
    
    

//     bool visited[MAX_VERTICES] = {false};
//     printf("\n");
//     printf("DFS traversal starting from node %d: ", startNode);
//     dfs(startNode, visited);
//     printf("\n");

    


//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define V 6  // Number of vertices in the graph

int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d \t %d\n", i, dist[i]);
    }
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];     // The output array, dist[i] will hold the shortest distance from src to i.
    bool sptSet[V];  // sptSet[i] will be true if vertex i is included in the shortest path tree or shortest distance from src to i is finalized.

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist);
}

int main() {
    int graph[V][V] = {
        {0, 1, 4, 0, 0, 0},
        {1, 0, 4, 2, 7, 0},
        {4, 4, 0, 3, 5, 0},
        {0, 2, 3, 0, 4, 6},
        {0, 7, 5, 4, 0, 7},
        {0, 0, 0, 6, 7, 0}
    };

    int src = 0; // Source vertex

    dijkstra(graph, src);

    return 0;
}

