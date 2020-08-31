#include <stdio.h>

int main()
{
    int n, m, r[20], c[20];
    printf("\nEnter the number of rows: ");
    scanf("%d",&n);
    printf("\nEnter the number of columns: ");
    scanf("%d", &m);
    if (n!=m){
        printf("\nNumber of rows should be equal to columns");
   }

   return 0;
}
