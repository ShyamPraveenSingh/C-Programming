//Program for operation in circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *link;
};
void display(struct node *last);
struct node *addtoempty(struct node *last, int data);
struct node *addtobeg(struct node *last, int data);
struct node *addtoend(struct node *last, int data);
struct node *addafter(struct node *last);

        main()
{
    struct node *last=NULL;

}

//Displaying the elements
void display(struct node *last)
{
    struct node *p;
    if(last == NULL){
        printf("\nList is empty\n");
        return;
    }
    p = last->link;
    do
    {
        printf("%d\t", p->info);
        p = p->link;
    } while (p!=last->link);
    printf("\n");
}


//Inserttion at the beginning of the list
struct node *addtobeg(struct node *last, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = last->link;
    last->link = tmp;
    return last;
}


//Insertion in an empty list
struct node *addtoempty(struct node *last, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    last = tmp;
    last->link = last;
    return last;
}

//Insertion at the end of the list
struct node *addtoend(struct node *last, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = last->link;
    last->link = tmp;
    last = tmp;
    return last;
}

//Insertion in between the nodes
struct node *addafter(struct node *last)
{
    int data, item;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &data);
    printf("\nEnter the element after which to delete: ");
    scanf("%d", &item);
    
    struct node *tmp, *p;
    p = last->link;
    do
    {
        if(p->info == item)
        {
            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link = p->link;
            p->link = tmp;
            if(p==last)
                last = tmp;
            return last;
        }
        p = p->link;
    } while (p!=last->link);
    printf("\n%d item is not present in the list: ", item);
    return last;
}