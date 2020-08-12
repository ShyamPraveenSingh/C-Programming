//Function for counting the elements of the Linked List
void count(struct node *start)
{
    int count = 0;
    p = start;
    while (p != NULL)
    {
        p = p->link;
        count++;
    }
    printf("\nNumber of elements in the list is: ", count);
} //End of count