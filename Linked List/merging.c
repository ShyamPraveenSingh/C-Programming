//Program of merging two sorted single linked lists
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *link;
};

struct node *create(struct node *start);
struct node *insert(struct node *start, int data);
struct node *insert_s(struct node *start, int data);
void display(struct node *start);
void merge(struct node *p1, struct node *p2);


main()
{
    struct node *start1 = NULL, *start2 = NULL;
    start1 = create(start1);
    start2 = create(start2);
    printf("\nList1: \t"); display(start1);
    printf("\nList2: \t"); display(start2);
    merge(start1, start2);
}





