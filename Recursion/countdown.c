#include <stdio.h>

int count(int n);

main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("%d \n", count(n));
}
int count(n)
{
    if(n == 0)
        return;
    return (n +  count(n-1));
}