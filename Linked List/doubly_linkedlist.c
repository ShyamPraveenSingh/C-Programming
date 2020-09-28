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