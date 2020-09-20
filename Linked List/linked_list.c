//Program of single linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);

main()
{
    struct node *start = NULL;

    start = create_list(start);
    display(start);

}

//Creation of a list
struct node *create_list(struct node *start)
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    start = NULL;
    if(n==0){
        return start;
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&data);
    start = addatbeg(start, data);
    for (i = 2; i<=n; i++){
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &data);
        start = addatend(start, data);
    }
    return start;
}

//Insertion at the beginning
struct node *addatbeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;
}

//Insertion at the end
struct node *addatend(struct node *start, int data)
{
    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p->link!=NULL)
        p = p->link;
    p->link = tmp;
    tmp->link = NULL;
    return start;
}

//Display the contents
void display(struct node *start)
{
    struct node *p;
    if(start == NULL){
        printf("\nList is empty");
        return;
    }
    p = start;
    printf("\nList is: ");
    while(p != NULL){
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n\n");
    
}

