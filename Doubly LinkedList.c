 Doubly Linked List:

Aim:
The aim of a doubly linked list is to create a data structure where each node is connected in both directions.

 Algorithm:
1. Insert at Beginning
Step 1: Create a new node
Step 2: Set newNode.data = value
Step 3: newNode.prev = NULL
Step 4: newNode.next = head
Step 5: If head != NULL, head.prev = newNode
Step 6: head = newNode

2. Insert at End
Step 1: Create a new node
Step 2: newNode.data = value
Step 3: newNode.next = NULL
Step 4: If head == NULL, set head = newNode and newNode.prev = NULL
Step 5: Else traverse to last node
Step 6: lastNode.next = newNode
Step 7: newNode.prev = lastNode

3. Delete a Node
Step 1: If head == NULL, list is empty, stop
Step 2: Find the node to delete (temp)
Step 3: If temp == head, head = temp.next
Step 4: If temp.next != NULL, temp.next.prev = temp.prev
Step 5: If temp.prev != NULL, temp.prev.next = temp.next
Step 6: Free temp

4. Traverse Forward
Start at head
While node != NULL
    print node.data
    move to next node

5. Traverse Backward
Move to last node
While node != NULL
    print node.data
    move to previous node

Program:
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next; 
    struct Node *prev; 
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
    newNode->prev = NULL;
    return newNode;
}
void InsertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = CreateNode(data);
    newNode->next = *head;
    newNode->prev = NULL; // Optional
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
    printf("Node with data %d inserted at beginning successfully  .\n", data);
}
void InsertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = CreateNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node with data %d inserted at the end successfully.\n", data);
}
void InsertAtPosition(struct Node **head, int data, int position)
{
    if (position < 1)
    {
        printf("Invalid position!\n");
        return;
    }
    if (position == 1)
    {
        InsertAtBeginning(head, data);
        return;
    }
    struct Node *temp = *head;
    for (int k = 1; (k < position - 1 && temp != NULL); k++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Given position is out of range!\n");
        return;
    }
    struct Node *newNode = CreateNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)        
        temp->next->prev = newNode; 
    temp->next = newNode;
    printf("Node with data %d inserted at position %d successfully.\n", data, position);
}
void DeleteNode(struct Node **head, int valueToDelete)
{
    if (*head == NULL)
    {
        printf("Linked List is empty, deletion operation can't be performed");
        return;
    }
    struct Node *temp = *head
    if (temp->data == valueToDelete)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        printf("Data %d deleted from list.\n", valueToDelete);
        return;
    }
    struct Node *before = *head;
    while (before->next != NULL)
    {
        if (before->next->data == valueToDelete)
        {
            temp = before->next;
            before->next = temp->next;

            if (temp->next != NULL)
                temp->next->prev = before;

            free(temp);
            printf("Data %d deleted from list.\n", valueToDelete);
            return;
        }
        before = before->next;
    }
    printf("Element %d not found.\n", valueToDelete);
    return;
}
void DisplayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp;
    temp = head;
    printf("\nLinked List Nodes: ");
    while (temp != NULL)
    {
        printf(" |Prev=%p|%d|Next=%p| -> ", temp->prev, temp->data, temp->next);
        temp = temp->next;
    }
}
int main()
{
    struct Node *head = NULL;
    int choice, data, pos;

    while (1)
    {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete by Value\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            InsertAtBeginning(&head, data);
            break;
        case 2:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            InsertAtEnd(&head, data);
            break;
        case 3:
            printf("Enter data and position to insert: ");
            scanf("%d %d", &data, &pos);
            InsertAtPosition(&head, data, pos);
            break;
        case 4:
            printf("Enter value to delete: ");
            scanf("%d", &data);
            DeleteNode(&head, data);
            break;
        case 5:
            DisplayList(head);
            break;
        case 6:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}


Which one do you want next? 😊
