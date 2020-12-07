//Dynamic Memory Allocation of Structures
#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int eno;
    char ename[20];
    float esal;
};

void main()
{
    struct emp* ptr;

    ptr = (struct emp*)malloc(sizeof(struct emp));
    if (ptr==NULL){
        printf("\n Out of memory.");
    }
    else{
        printf("\n Enter employee details: ");
        scanf("%d %s %f",&ptr->eno, ptr->ename, &ptr->esal);
        printf("Details : \n %d %s %f \n", ptr->eno, ptr->ename, ptr->esal);
    }
    return 0;
}
