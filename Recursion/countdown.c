#include <stdio.h>

int count(int n);

main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("%d", count(n));
}

int count(n)
{
    if(n == 0)
        return;
    return (count (n-1));
}