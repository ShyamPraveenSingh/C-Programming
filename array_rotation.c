#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are: ");
    for (int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nAfter rotation: ");
    for (int i = 0; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}