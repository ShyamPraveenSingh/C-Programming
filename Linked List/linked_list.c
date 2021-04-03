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
struct node *del(struct node *start, int data);
struct node *reverse(struct node *start);

main()
{
    struct node *start = NULL;
    start = create_list(start);
    display(start);
    //search(start);
    int data;
    printf("\n Enter the element to delete: ");
    scanf("%d", &data);
    del(start, data);
    //display(start);
    //reverse(start);
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

//Searching in the list

void search(struct node *start)
{
    int item;
    printf("\nEnter the item to search: ");
    scanf("%d", &item);
    struct node *p = start;
    int pos = 1;
    while(p!=NULL){
        if(p->info == item){
            printf("\nElement found at %d position.", pos);
            return;
        }
        p = p->link;
        pos++;
    }
    printf("\nItem not found\n");
}

struct node *del(struct node *start, int data)
{
    struct node *p, *tmp;
    if(start==NULL){
        printf("\nList is empty");
        return start;
    }
    if(start->info == data)   //Deletiion of first node
    {
        tmp = start;
        start = start->link;
        free(tmp);
        return start;
    }
    p = start;      //Deletion in between or at the end
    while(p->link!=NULL)
    {
        if(p->link->info == data)
        {
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }
        p = p->link;
    }
    printf("\nElement not found to delete.\n");
    return start;
}

//Reverse the linked list 
struct node *reverse(struct node *start)
{
    struct node *prev, *ptr, *next;
    prev = NULL;
    ptr = start;
    while(ptr!=NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
}

