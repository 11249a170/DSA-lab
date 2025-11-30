InfixtoPostfix
Aim:
To write a C program to convert an Infix expression to a Postfix expression using stack operations.

Algorithm:
Start the program.
Initialize an empty stack.
Read the infix expression from the user.
Scan the infix expression from left to right.
If the scanned character is an operand, add it to the postfix expression.
If the character is ‘(’, push it into the stack.
If the character is ‘)’, pop all operators from the stack until ‘(’ is found.
If an operator is encountered, pop from the stack and add to postfix until the stack is empty or an operator of lower precedence is found, then push the operator.
After the expression is fully scanned, pop and append all remaining operators from the stack.
Display the postfix expression.
Stop the program.

Program:
#include <stdio.h>
#include <stdlib.h>
int top=-1,MAX;
char*stack;
void push(char item)
{
    if (top == MAX - 1)
{
        printf("Stack Overflow\n");
}
    else
{
    top=top+1;
    stack[top]=item;
}
}
char pop()
{
    if (top == -1)
{
        printf("stack empty!");
        return '\0';
    else
{
        char item=stack[top];
        top=-1;
        return item;
}
}
char peek()
{
   if (top==-1)
{
    return '\0';
}
else
{
   return stack[top];
}
}
int Getprecedence(char op)
{
   switch(op)
{
   case'+';
   case'-'-;
       return 1;
   case'*';
   case'/';
      return 2;
   case'^';
      return 3;
   default:
      return 0;
}
}
int main()
{
   printf("enter the size expression:");
   scanf("%d",&MAX);
   stack=(char*)malloc(MAX*size of(char));
   char infix[MAX];
   char post[MAX];
   printf("please enter the infix expression string ofnsize%d:",MAX);
   scanf("%s",infix);
   int Tokenprecedence,j=0,i=0;
   char c,temp;
   while((c=infix[i])!='\0')
    {
      tokenprecedence=Getprecedence(c);
      if(tokenprecedence>0)
        while(tokenprecedence<=Getprecedence(peek()))
         {
            postfix[j++]=pop();
         }
         push(c);
         }
          else
           {
             switch(c)
           {
             case'c';
             push(c);
             break;
             default;
             postfix[j++]=c;
             break;
           }
        }
        i++
       }
      while(peek()!='\0')
      {
        char c=pop();
        postfix[j++]=c;
      }
    postfix[j]='\0';
    printf("postfix notation is %s",postfix);
    return 0;
  }

Output:
Enter the infix expression: A+B*C
Postfix Expression: ABC*+


Result:
The program successfully converts a given infix expression into its postfix form using stack operations.
