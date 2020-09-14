#include <stdio.h>

int main()
{
    int *ptr, size;
    printf("\nEnter the number of elements: ");
    scanf("%d",&size);

    ptr = (int *)malloc(size*sizeof(int));

    for (int i = 0; i<size; i++){
        printf("\nEnter the element: ");
        scanf("%d",ptr+i);
    }
    for (int i = 0; i<size; i++){
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
}