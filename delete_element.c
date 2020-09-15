//Deletion of element from a given position in an array
#include <stdio.h>

int main(){
    int n, arr[30], pos;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i<n; i++){
        printf("\nEnter \[%d] element: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements are:\n");
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }


    printf("\n\nEnter the position of the element you want to delete: ");
    scanf("%d", &pos);

    if (pos<=0 || pos>n){
        printf("\nError! Invalid position\n");
    }
    else{
        for (int i = pos-1; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        n--;

        printf("\nAfter deletion the elements are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }

        printf("\n");
    }

    
    return 0;
} 