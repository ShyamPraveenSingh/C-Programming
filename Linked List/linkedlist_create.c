#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    stuct node *link;
};

int main()
{
    int i, n, data;
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    int *start = NULL;
    if(n==0)
        return start;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &data);
}