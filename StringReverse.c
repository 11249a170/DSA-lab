StringReverse
Aim:
To write a C program to reverse a string using stack operations (push and pop).

Algorithm:
Start the program.
Initialize TOP = -1.
Read the string to be reversed.
Push each character of the string into the stack.
Pop each character from the stack and print it to get the reversed string.
Stop the program.

Program:
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int TOP = -1;
char STACK[MAX];
void push(char item)
{
    if (TOP == MAX - 1) 
    {
        printf("Stack is overflow\n");
    } else {
        TOP = TOP + 1;
        STACK[TOP] = item;
    }
}
char pop() 
{
    char item;
    if (TOP == -1)
    {
        printf("Stack is underflow/empty\n");
        return '\0';
    }
    else 
    {
        item = STACK[TOP];
        TOP = TOP - 1;
        return item;
    }
}

int main()
{
    int n;
    char stringToReverse[MAX];
    printf("Enter the size of the string to reverse: ");
    scanf("%d", &n); 
    printf("Please enter the string of size %d to reverse: ", n);
    scanf("%s", stringToReverse);
    for (int i = 0; i < n; i++)
        push(stringToReverse[i]);
    printf("Reversed string: ");
    for (int i = 0; i < n; i++)
        printf("%c", pop());
    return 0;
}

Output:
Enter the size of the string to reverse: 5
Please enter the string of size 5 to reverse: HELLO
Reversed string: OLLEH


Result:
The program successfully reverses a given string using stack operations.
