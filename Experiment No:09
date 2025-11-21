Stack using linked list
Aim: To implement a stack using a linked list so that insertion and deletion happen efficiently at the top using dynamic memory.

Algorithm:
Push
Step 1: Create a new node
Step 2: Set newNode.data = value
Step 3: Set newNode.next = top
Step 4: Set top = newNode
Step 5: End
Pop 
Step 1: If top == NULL, print "Stack Underflow" and Stop
Step 2: Set temp = top
Step 3: Set top = top.next
Step 4: Delete temp
Step 5: End.

Program:
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next; 
};
struct Node *CreateNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void push(struct Node **top, int data)
{
    struct Node *newElement = CreateNode(data);
    newElement->next = *top;
    *top = newElement;
    printf("Node with data %d pushed successfully  .\n", data);
}
void pop(struct Node **top)
{
    if (*top == NULL)
    {
        printf("Stack is empty/underflow, pop operation can't be performed");
        return;
    }
    struct Node *temp = *top;
    *top = temp->next;
    printf("Element %d popped from stack.\n", temp->data);
    free(temp);
    return;
}
void DisplayStack(struct Node *top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    struct Node *temp;
    temp = top;
    printf("\nElements In Stack: [Top] ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct Node *top = NULL;
    int choice, data, pos;
    while (1)
    {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            push(&top, data);
            break;
        case 2:
            pop(&top);
            break;
        case 3:
            DisplayStack(top);
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
