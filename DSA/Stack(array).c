Stack

Aim:
To implement a stack using an array and perform push, pop and display operations.

Algorithm:
Start.
Initialize top = -1 and MAX (stack size).
Display menu: 1) Push 2) Pop 3) Display 4) Exit.
If user chooses Push:
Check if top == MAX-1 → if true, report "stack overflow" and go to step 3.
Else increment top = top + 1 and set stack[top] = value (read value).
Go to step 3.
If user chooses Pop:
Check if top == -1 → if true, report "stack underflow" and go to step 3.
Else read popped = stack[top], decrement top = top - 1, display popped value.
Go to step 3.
If user chooses Display:
If top == -1 display "stack is empty".
Else loop i = top down to 0 and print stack[i].
Go to step 3.
If user chooses Exit: stop.
End.

Program:
#include <stdio.h>
int main()
{
    int n, op, top, item;
    top = -1;
    printf("enter the size of the stack:\n");
    scanf("%d", &n);
    int arr[n];
    while (op != 3)
    {
        printf("choose the operation: 1.push, 2.pop, 3.exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            if (top == n - 1)
            {
                printf("stack overflow");
            }
            else
            {
                printf("enter the element to be insert:\n");
                scanf("%d", &item);
                top = top + 1;
                arr[top] = item;
            }
            break;

        case 2:
            if (top == -1)
            {
                printf("stack underflow");
            }
            else
            {
                item = arr[top];
                top = top - 1;
                printf("the item is:%d\n", item);
            }
            break;

        case 3:
            return 0;

        default:
            printf("no such operation is included\n");
        }
    }
    return 0;
}

 Output:
enter the size of the stack:
3
choose the operation: 1.push, 2.pop, 3.exit
1
enter the element to be insert:
10
choose the operation: 1.push, 2.pop, 3.exit
1
enter the element to be insert:
20
choose the operation: 1.push, 2.pop, 3.exit
2
the item is:20
choose the operation: 1.push, 2.pop, 3.exit
3

 Result:
Program executed successfully and performed stack operations (push and pop) correctly.






