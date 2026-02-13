Circular Queue using linked list
Aim
To implement a circular queue using a linked list where the last node points back to the first node, allowing efficient insertion (enqueue) and deletion (dequeue) while maintaining continuous circular flow.

Algorithm
Enqueue (Insert)
Step 1: Create a new node
Step 2: Set newNode.data = value
Step 3: If front == NULL:
            front = rear = newNode
            rear->next = front
        Else:
            rear->next = newNode
            rear = newNode
            rear->next = front
Step 4: End

Dequeue (Delete)
Step 1: If front == NULL, print "Queue Underflow" and Stop
Step 2: Set temp = front
Step 3: If front == rear:
            front = rear = NULL
        Else:
            front = front->next
            rear->next = front
Step 4: Delete temp
Step 5: End

Porgram:
include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void enqueue(int item)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = item;
    if (front == NULL && rear == NULL) 
    {
        front = rear = newNode;
        newNode->next = front; 
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = front; 
    }
    printf("%d inserted into circular queue.\n", item);
}
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow!\n");
        return;
    }
    struct Node *temp = front;
    if (front == rear) 
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
        rear->next = front; 
    }
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}
void display()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    struct Node *temp = front;
    printf("Circular Queue elements: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\n--- Queue Using Linked List Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

If you need, I can also give display algorithm or diagram representation 😊
