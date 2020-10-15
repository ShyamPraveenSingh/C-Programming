//Program of stacks using array

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int stack_arr[MAX];
int top = -1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

main()
{
    int item;
    printf("\nEnter the item to be pushed: ");
    scanf("%d", &item);
    push(item);
   // break;
}


//Push function in the stacks
void push(int item)
{
    if(isFull())
    {
        printf("\nStacks Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = item;
}

//Pop function in the stacks
int pop()
{
    int item;
    if(isEmpty())
    {
        printf("\nStack Underflow");
        exit(1);
    }
    item = stack_arr[top];
    top = top - 1;
    return item;
}

//Peek at the top element
int peek()
{
    if(isEmpty())
    {
        printf("\nStack Underflow");
        exit(1);
    }
    return stack_arr[top];
}

//Checking if the stack is empty
int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

//Checking if the list is full
int isFull()
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

//Displaying the array
void display()
{
    int i;
    if(isEmpty())
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nStacks element :\n\n");
    for(i = top; i>=0; i--)
    {
        printf(" %d\n", stack_arr[i]);
    }
    printf("\n");
}
