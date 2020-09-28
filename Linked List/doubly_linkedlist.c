// Programs for the operations in doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node *prev;
    int info;
    struct node *next;
};

void display(struct node *start);
struct node *addtoempty(struct node *start, int data);
struct node *addtobeg(struct node *start, int data);
struct node *addtoend(struct node *start, int data);
struct node *addafter(struct node *start);
struct node *addbefore(struct node *start);
struct node *create_list(struct node *start);

main()
{
    struct node *start=NULL;
    start = create_list(start);
    display(start);
}

//Displaying the elements 
void display(struct node *start)
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

//Adding to the empty list
struct node *addtoempty(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->prev = NULL;
    tmp->next = NULL;
    start = tmp;
    return start;
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

//Adding to the end
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

//Adding after the given node
struct node *addafter(struct node *start)
{
    int data, item;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &data);
    printf("\nEnter the element after which to insert: ");
    scanf("%d", &item);

    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p!=NULL)
    {
        if(p->info == item)
        {
            tmp->prev = p;
            tmp->next = p->next;
            if (p->next!=NULL)
                p->next->prev = tmp;
            p->next = tmp;
            return start;
        }
       p = p->next;
    }
    printf("\n%d not present in the list\n", item);
    return start;
}
    
//Adding before the given node
struct node *addbefore(struct node *start)
{
    int data, item;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &data);
    printf("\nEnter the element after which to insert: ");
    scanf("%d", &item);

    //Just change p to q
}


//Creating linked list
struct node *create_list(struct node *start)
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    start = NULL;
    if (n == 0)
        return start;
    printf("\nEnter the element: ");
    scanf("%d", &data);
    start = addtoempty(start, data);

    for (i = 2; i<=n; i++)
    {
        printf("\nEnter the element: ");
        scanf("%d", &data);
        start = addtoend(start, data);
    }
    return start;
}