#include <stdio.h>
void check(int num);

main()
{
    int arr[5], i;
    printf("\nEnter the array elements: ");
    for (i = 0; i<10; i++){
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
}

void check (int num)
{
    if (num%2==0)
        printf("%d is even\n", num);
    else 
        printf("%d is odd\n", num);
}