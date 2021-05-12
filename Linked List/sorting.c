//Program for sorting of data in linked list
//Selection sort
#include<stdio.h>

void selection(struct node *start)
{
    struct node *p, *q;
    int tmp;
    p = start;

    for(p=start; p->link!=NULL; p=p->link)
    {
        for(q=p->link; q!=NULL; q=q->link)
        {
            if(p->info > q->info)
            {
                tmp = p->info;
                p->info = q->info;
                q->info = tmp;
            }
        }
    }
}

//Bubble Sort
void bubble(struct node *start)
{
    struct node *, *p;
    int tmp;
    for (end=NULL; end!=start->link; p=p->link)
    {
        q=q->link
        if(p->link > q->link)
        {
            tmp = p->info;
            p->info = q->info;
            q->info = tmp;
        }
    }
}

main()
{

}