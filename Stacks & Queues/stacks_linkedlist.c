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
