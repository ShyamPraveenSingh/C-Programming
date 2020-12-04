//Program of priority queue using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int priority;
    int info;
    struct node *link;
}*front = NULL;

void insert ();
int del();
void display();
int isEmpty();

main()
{
    insert();
    display();

}

//Fuction to insert the items
void insert()
{
    int n, item, item_priority;
    printf("\nEnter the number of items: ");
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        printf("\nEnter the item to be added: ");
        scanf("%d", &item);
        printf("\nEnter the priority of the item: ");
        scanf("%d", &item_priority);
    }

    struct node *tmp, *p;
    tmp = (struct node *)malloc(sizeof(struct node));
    if(tmp == NULL)
    {
        printf("\nMemory not available");
        return;
    }
    tmp->info = item;
    tmp->priority = item_priority;
    
    if(isEmpty || item_priority < front->priority)
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        p = front;
        while(p->link != NULL && p->link->priority <= item_priority)
            p = p->link;
        tmp->link = p->link;
        p->link = tmp;
    }
}

//Deletion of items from the list
int del()
{
    struct node *tmp;
    int item;
    if(isEmpty())
    {
        printf("\nQueue Underflow");
        exit(1);
    }
    else
    {
        tmp = front;
        item = tmp->info;
        front = front->link;
        free(tmp);
    }
    return item;
}

//Checking for the empty elements
int isEmpty()
{
    if(front == NULL)
        return 1;
    else
        return 0;
}


//Displaying the elements
void display()
{
    struct node *ptr;
    ptr = front;
    if(isEmpty())
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue is: ");
        printf("\nPriority    Item\n");
        while(ptr!=NULL)
        {
            printf("%d  %d\n", ptr->priority, ptr->info);
            ptr = ptr->link;
        }
    }
}
