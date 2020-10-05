//Program for sorting of data in linked list


//Selection sort
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