#include <stdio.h>

int main()
{
    int n,arr[100], i, j, k, temp;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i<n; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are: ");
    for (i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the rotation: ");
    scanf("%d", &k);

    for (j= 1; j<=k; j++){
        temp = arr[0];
        for (i = 0; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        arr[i] = temp;
    }
    printf("\n After rotation\n");
        for(i = 0; i<n; i++){
            printf("%d\t", arr[i]);
        }
    printf("\n");
}