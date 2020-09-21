#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *create_list(struct node *start);
void display (struct node *start);
struct node *addtobeg(struct node *start, int data);
struct node *addtoend(struct node *start, int data);


main()
{
    struct node *start = NULL;
    start = create_list(start);
    display(start);
}

//Creating the list

struct node *create_list(struct node *start)
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    start = NULL;
    if (n == 0)
        return start;
    printf("\nEnter the data element: ");
    scanf("%d", &data);
    start = addtobeg(start, data);
    for (i = 2; i<=n; i++){
        printf("\nEnter the data element: ");
        scanf("%d", &data);
        start = addtoend(start, data);
    }
    return start;
}

// Add to the beginning
struct node *addtobeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;
}

//Add to end
struct node *addtoend(struct node *start, int data)
{
    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p->link!=NULL){
        p = p->link;
    }
    p->link = tmp;
    tmp->link = NULL;
    return start;
}

//Displaying the list
void display (struct node *start)
{
    struct node *p;
    if(start == NULL){
        printf("\nThe list is empty");
        return start;    
    }
    p = start;
    printf("\nList is: ");
    while(p != NULL){
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");

}