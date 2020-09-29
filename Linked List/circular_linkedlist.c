//Program for operation in circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *link;
};
void display(struct node *last);




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