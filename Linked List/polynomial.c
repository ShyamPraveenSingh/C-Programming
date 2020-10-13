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

main()
{
    struct node *start1 = NULL, *start2 = NULL;
    printf("\nEnter the 1st polynomial: ");
    start1 = create(start1);
    printf("\nEnter the 2nd polynomial: ");
    start2 = create(start2);
    printf("\nPolynomial 1 is: ");
    display(start1);
    printf("\nPolynomial 2 is: ");
    display(start2);
    poly_add(start1, start2);
    poly_mult(start1, start2);
}


//Creation of the list
struct node *create(struct node *start)
{
    int i, n, ex;
    float co;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        printf("\nEnter the coefficient for term %d: ", i);
        scanf("%f", &co);
        printf("\nEnter the exponent for term %d: ", i);
        scanf("%d", &ex);
        start = insert_s(start, co, ex);
    }
    return start;
}


//Insertion in the list
struct node *insert_s(struct node *start, float co, int ex)
{
    struct node *ptr, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->coef = co;
    tmp->expo = ex;

    //if list is empty or greater than the first one
    if(start == NULL || ex > start->expo)
    {
        tmp->link = start;
        start = tmp;
    }
    else
    {
        ptr = start;
        while(ptr->link!=NULL && ptr->link->expo >= ex)
            ptr = ptr->link;
            tmp->link = ptr->link;
            ptr->link = tmp;
    }
    return start;
}

// Insertion in the list 
struct node *insert(struct node *start, float co, int ex)
{
    struct node *ptr, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->coef = co;
    tmp->expo = ex;

    //if list is empty or greater than the first one
    if (start == NULL)
    {
        tmp->link = start;
        start = tmp;
    }
    else
    {
        ptr = start;
        while (ptr->link != NULL)
            ptr = ptr->link;
        tmp->link = ptr->link;
        ptr->link = tmp;
    }
    return start;
}

//Displaying the list
void display(struct node *ptr)
{
    if(ptr == NULL)
    {
        printf("\nZero Polynomial");
        return;
    }
    
}