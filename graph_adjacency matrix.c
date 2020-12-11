//Program for creation of adjacency matrix

#include <stdio.h>
#define MAX 100

int adj[MAX] [MAX];
int n;

main()
{
    int max_edge, i, j, origin, destin;
    int graph_type;
    printf("\nEnter 1 for undirected graph or 2 for directed graph: ");
    scanf("%d", &graph_type);
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    
    if (graph_type == 1)
        max_edge = n*(n-1)/2;
    else
        max_edge = n*(n-1);
    
    for(i=1; i<=max_edge; i++)
    {
        printf("\nEnter edge %d (-1 -1 to quit) : ",i);
        scanf("%d %d", &origin, &destin);
        
        if ((origin == -1 || destin == -1))\
            break;

        if((origin >= n || destin >= n || origin < 0 || destin < 0))
        {
            printf("\nInvalid vertex\n");
            i--;
        }
        else
        {
            adj[origin][destin] = 1;
            if(graph_type == 1)
                adj[destin][origin] = 1;
        }
    }

    printf("\nThe adjaceny matrix is: \n");
    for(i = 0; i<=n-1; i++)
    {
        for (j = 0; j<=n-1; j++)
            printf("\n%4d", adj[i][j]);
        printf("\n");
    }
}


