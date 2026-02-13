Queue operation using array

AIM
To implement queue operations (INSERT/ENQUEUE, DELETE/DEQUEUE, DISPLAY) using an array, and to understand how linear queues manage data using the FIFO (First In First Out) principle.

ALGORITHMS
1. ENQUEUE (Insert an element)
If rear == MAX-1, then
Queue is overflow → stop.
If front == -1 and rear == -1,
Set front = rear = 0.
Else
rear = rear + 1.
Insert the element at queue[rear].
2. DEQUEUE (Delete an element)
If front == -1, then
Queue is underflow → stop.
Retrieve the element at queue[front].
If front == rear,
Set front = rear = -1. (Queue becomes empty)
Else
front = front + 1.
3. DISPLAY Queue
If front == -1,
Print “Queue is empty”.
Else
For i = front to rear
Print queue[i].

Program:
#include <stdio.h>
#include <stdlib.h>
int front = -1, rear = -1, size;
int *QUEUE; // Dynamic array for queue
void enqueue(int item)
{
    if (rear == size - 1)
    {
        printf("Queue Overflow! Cannot insert.\n");
        return;
    }
    if (front == -1) // First element insertion
        front = 0;
        rear++;
    QUEUE[rear] = item;
    printf("%d inserted into queue.\n", item);
}
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow! Nothing to delete.\n");
        return;
    }
    int temp = QUEUE[front];
    front++;
    printf("Deleted element: %d\n", temp);
    // Reset queue when empty
    if (front > rear)
        front = rear = -1;
}
void display()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", QUEUE[i]);
    }
    printf("\n");
}
int main()
{
    int choice, data;
    printf("Enter size of Queue: ");
    scanf("%d", &size);
    QUEUE = (int *)malloc(size * sizeof(int));
    if (QUEUE == NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }
    while (1)
    {
        printf("\n--- Queue Menu ---\n");
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
            free(QUEUE);
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}


