//Program of stacks using array

#include <stdio.h>
#include <stdlin.h>

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

}


//Push function in the stacks
void push(int item)
{
    if(isEmpty())
    {
        printf("\nStacks Overflow");
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