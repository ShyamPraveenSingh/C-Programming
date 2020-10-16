//Program for implementing the stacks in linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *link;
}*top = NULL;

void push(int item);
int pop();
int peek();
int isEmpty();
void display();

main()
{

}

//Push function to add to list
void push(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if(tmp==NULL)
    {
        printf("\nStack Overflow");
        return;
    }
    tmp->info = item;
    tmp->link = top;
    top = tmp;
}

//Pop function to remove the item from the list
int pop()
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if (isEmpty())
    {
        printf("\nStacks Underflow");
        exit(1);
    }
    tmp = top;
    item = tmp->info;
    top = top->link;
    free(tmp);
    return item;
}

//Peek function to look at the top of the list
int peek()
{
    if(isEmpty())
    {
        printf("\nStack Underflow");
        exit(1);
    }
    return top->info;
}

