//Insertion in a linked list

// 1. At the beginning of the list
struct node *addtobeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;
}//End of addatbeg

// 2. At the end
struct node *addtoend(struct node *start, int data)
{
    struct node *tmp, *p;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while (p->link!=NULL){}
    {
       p = p->link;
    }
    p->link = tmp;
    tmp->link = NULL;
    return start;
} //End of addatend