#include <stdio.h>

int main(void){
   int n, fact;

   printf("\nEnter the number: ");
   scanf("%d",&n);
   while (n>0){
       fact = n * (n-1);
       n--;
   }
   printf("\nThe factorial of %d is %d.\n",n, fact);
   return 0;
}
