//Linked List Program

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *create_list(struct node *start);
struct node *addtobeg(struct node *start, int data);
struct node *addtoend(struct node *start, int data);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start);
struct node *delete(struct node *start);
struct node *reverse(struct node *start);
void selection(struct node *start);

main()
{
    struct node *start = NULL;
    start = create_list(start);
    display(start);
    selection(start);
    display(start);
}


//Creating a list
struct node *create_list(struct node *start)
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    if(n==0)
        return start;
    printf("\nEnter the element: ");
    scanf("%d", &data);
    start = addtobeg(start, data);
    for (i = 2; i<=n; i++){
        printf("\nEnter the element: ");
        scanf("%d", &data);
        start = addtoend(start, data);
    }
    return start;
}

//Adding the elements at the beginning
struct node *addtobeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;
}

//Adding the elements at the end
struct node *addtoend(struct node *start, int data)
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

//Displaying the elements
void display(struct node *start)
{
    struct node *p;
    if(start==NULL){
        printf("\nList is empty");
        return;
    }
    p = start;
    printf("\nList is: \n");
    while(p!=NULL){
        printf("%d\t", p->info);
        p = p->link;
    }
    printf("\n\n");
}

//Counting the nodes in the list
void count (struct node *start)
{
    int count = 0;
    struct node *p;
    p = start;
    while(p!=NULL)
    {
        p = p->link;
        count++;
    }
    printf("\nThe number of nodes are: %d\n", count);
}


//Searching for an element in the list
void search(struct node *start)
{
    int item, pos=1;
    struct node *p;
    printf("\nEnter the element to search: ");
    scanf("%d", &item);
    p = start;
    while(p!=NULL)
    {
        if (p->info == item){
            printf("\nElement is present at position: %d \n", pos);
            return;
        }
        p = p->link;
        pos++;
    }
    printf("\nElement not found\n");
}


//Delete the element from the list
struct node *delete(struct node *start)
{
    struct node *p, *tmp;
    if (start == NULL)
    {
        printf("\nList is empty \n");
        return start;
    }
    int item;
    printf("\nEnter the data to be deleted: ");
    scanf("%d", &item);
   //Deletion at the beginning
    if (start->info == item){
        tmp = start;
        start = start->link;
        free(tmp);
        return start;
    }
   //Deletion in between or the end
    p = start;
    while(p->link!=NULL)
    {
        if(p->link->info == item)
        {
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }

        p = p->link;
    }
    printf("\nElement not found\n");
    return start;
}

//Reversing the linked list
//struct node *reverse(struct node *start)
//{
    
//}

//Selection sort
void selection(struct node *start)
{
    struct node *p, *q;
    int tmp;
    p = start;

    for (p = start; p->link != NULL; p = p->link)
    {
        for (q = p->link; q != NULL; q = q->link)
        {
            if (p->info > q->info)
            {
                tmp = p->info;
                p->info = q->info;
                q->info = tmp;
            }
        }
    }
}