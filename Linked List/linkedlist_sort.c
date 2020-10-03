//Program of sorted linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *insert(struct node *start);
void display(struct node *start);

main()
{
    struct node *start = NULL;
    start = insert(start);
    display(start);
}

//Sorting in the linked list
struct node *insert(struct node *start)
{
    int data;
    printf("\nEnter the element to insert: ");
    scanf("%d", &data);

    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;

    if(start == NULL || data < start->info)
    {
        tmp->link = start;
        start = tmp;
        return start;
    }
    else
    {
        p = start;
        while(p->link!=NULL && p->link->info < data)
            p = p->link;
        tmp->link = p->link;
        p->link = tmp;
    }
    return start;
}


void display(struct node *start)
{
    struct node *q;
    if(start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    printf("\nList is: \n");
    q = start;
    while(q!=NULL)
    {
        printf("%d\t", q->info);
        q = q->link;
    }
    printf("\n\n");
}
