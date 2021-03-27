//Function for displayig the Linked List
void display(struct node *start)
{
    struct node *p;
    if (start === NULL)
    {
        printf("\nList is empty. ");
        return;
    }
    p = start;
    printf("\nList is: ");
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p = p->link;
    }
    printf("\n\n")
} //End of display

