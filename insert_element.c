//Insertion of elements on the given position

#include <stdio.h>
int main()
{
    int n, pos, new;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i<n; i++){
        printf("\nEnter the %d element: ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nThe elements are: \n");
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);        
    }

    printf("\nEnter a position to insert element: ");
    scanf("%d",&pos);
    printf("\nEnter the element: ");
    scanf("%d",&new);

    if (pos <= 0 || pos > n){
        printf("\nError! Invalid position\n");
    }
    else{
        n++;
        for (int i = n; i >= pos; i--)
            arr[i] = arr[i - 1];
        
        arr[pos - 1] = new;
    }

    printf("\nThe new elements are: \n");
    for(int i = 0; i<n; i++){
        printf("\t%d",arr[i]);
    }
    printf("\n");
    }