#include <stdio.h>

int main()
{
    int *ptr, n, i;
    printf("\nEnter the number of integers: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));

        if (ptr==NULL){
            printf("\nNot enough memory");
        }

    for (i = 0; i<n; i++){
        printf("\nEnter an integer: ");
        scanf("%d",ptr+i);
    }
    for(i = 0; i<n; i++){
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}
