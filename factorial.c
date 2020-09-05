#include <stdio.h>

int main(){
   int n, fact=1;

   printf("\nEnter the number: ");
   scanf("%d",&n);
   while (n>1){
       fact*=n;
       n--;
   }
   printf("\nThe factorial is: %d\n",fact);
   return 0;
}
