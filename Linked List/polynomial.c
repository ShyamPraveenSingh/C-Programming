//Program of polynomial addition and multiplication

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    float coef;
    int expo;
    struct node *link;
}

struct node *create(struct node *);
struct node *insert_s(struct node *, float, int);
struct node *insert(struct node *, float, int);
void display (struct node *ptr);
void poly_add(struct node *, struct node *);
void poly_mult(struct node *, struct node *);

