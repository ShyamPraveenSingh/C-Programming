//Creation of linked list
struct node
{
    int info;
    struct node *link;
};

main()
{


}

//Creation of linked list
struct node *create_list(struct node *start)
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    start = NULL;
    if (n == 0)
        return start;
    printf("\nEnter the element: ");
    scanf("%d", &data);
    start = addtobeg(start, data);
    for (i = 2, i<=n; i++){
        printf("\nEnter the element: ");
        scanf ("%d", &data);
        start = addtoend(start, data);
    }
    return start;
}


//Add to beginning
struct node *addtobeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->link = start;
    tmp->info = data;
    start = tmp;
    return start;
}

//Add to end
struct node *addtoend(struct node *start, int data)
{
    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p->link!=NULL)
        p = p->link;
    p->link = tmp;
    tmp->link = NULL;
    return start;
}


//Displaying the linked list
void display(struct node *start)
{
    struct node *p;
    if (start == NULL)
        printf("\nList is empty");
    p = start;
    while (p->link != NULL){
        printf("%d ", p->info);
        p = p->link;
    }
}