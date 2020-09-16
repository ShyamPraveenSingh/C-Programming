void search (struct node *start, int item)
{
    struct node *p = start;
    int pos = 1;
    while(p!=NULL)
    {
        if(p->info == item)
            {
                printf("\nElement %d is found at %d ",item, pos);
                return;
            }
        p = p->link;
        pos++;
    }
    printf("\nItem %d not found in the list. ", item);
} //End of search