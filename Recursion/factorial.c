//Program to find the factorial of a number by recursive method
#include <stdio.h>

long int fact (int n);
main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if(num < 0)
        printf("\nNo factorial for negative numbers.\n");
    else
        printf("\nFactorial of %d is %d\n",num, fact(num));
}

long int fact (int n)
{
    if(n==0)
        return 1;
    return (n*fact(n-1));

}