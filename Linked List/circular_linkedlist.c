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
struct node *create_list(struct node *last);

        main()
{
    struct node *last=NULL;
    last = create_list(last);
    display(last);

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
    printf("\nList is :\n");
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

//Creating a linked list
struct node *create_list(struct node *last)
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    last == NULL;
    if (n == 0)
        return last;
    printf("\nEnter the data: ");
    scanf("%d", &data);
    last = addtoempty(last, data);
    for(i = 2; i<=n; i++)   
    {
        printf("\nEnter the data: ");
        scanf("%d", &data);
        last = addtoend(last, data);
    }
    return last;
}

//Deleting of the elements
struct node *del(struct node *last)
{
    int data;
    printf("\nEnter the element you wish to delete: ");
    scanf("%d", &data);

    struct node *tmp, *p;
    if(last == NULL)
    {
        printf("\nList is empty\n");
        return last;
    }
    //Deletion of only node
    if(last->link == last && last->info == data)
    {
        tmp = last;
        last = NULL;
        free(tmp);
        return last;
    }

    //Deletion of first node
    if(last->link->info == data)
    {
        tmp = last->link;
        last->link = tmp->link;
        free(tmp);
        return last;
    }

    //Deletion in between
    p = last->link;
    while(p->link!=last)
    {
        if(p->link->info == data)
        {
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return last;
        }
        p = p->link;
    }

    //Deletion of the last node
    if(last->info == data)
    {
        tmp = last;
        p->link = last->link;
        last = p;
        free(tmp);
        return last;
    }
    printf("\nElement %d not present in the list.\n", data);
    return last;
}


