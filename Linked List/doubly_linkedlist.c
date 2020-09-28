// Programs for the operations in doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node *prev;
    int info;
    struct node *next;
};

struct node *display(struct node *start);
struct node *addtobeg(struct node *start, int data);
struct node *addtoend(struct node *start, int data);


main()
{
    struct node *start;
}

//Displaying the elements 
struct node *display(struct node *start)
{
    struct node *p;
    if(start == NULL){
        printf("\nList is empty ");
        return;
    }

    p = start;
    printf("\nList is: \n");
    while(p!=NULL)
    {
        printf("%d\t", p->info);
        p = p->next;
    }
    printf("\n\n");
}

//Adding to the beginning of the list
struct node *addtobeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->prev = NULL;
    tmp->next = start;
    start->prev = tmp;
    start = tmp;
    return start;
}

struct node *addtoend(struct node *start, int data)
{
    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;

    p = start;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = tmp;
    tmp->next = NULL;
    tmp->prev = p;
    return start;
    
}