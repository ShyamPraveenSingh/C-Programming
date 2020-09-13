#include <stdio.h>
int func(int x, int y, int *ps, int *pd, int *pp);
int main()
{
    int  a, b, sum, diff, prod;
    a=6;
    b=4;
    printf("\na=%d, b=%d", a, b);
    func(a,b,&sum,&diff,&prod);
    printf("\nSum = %d, Difference = %d, Product = %d\n",sum,diff,prod);

}

int func(int x, int y, int *ps, int *pd, int *pp)
{
    *ps = x+y;
    *pd = x-y;
    *pp = x*y;
    printf("\na=%d, b=%d",x,y);
}