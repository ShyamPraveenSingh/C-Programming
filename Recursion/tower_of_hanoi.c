//Program to solve Tower of Hanoi using recursion

#include<stdio.h>
void tofh(int ndisk, char source, char temp, char dest);

main()
{
    char source = 'A', temp = 'B', dest = 'C';
    int ndisk;
    printf("\nEnter the number of disks: ");
    scanf("%d",&ndisk);
    printf("\nSequence is: \n");
    tofh(ndisk, source, temp, dest);
}

void tofh (int ndisk, char source, char temp, char dest)
{
    if(ndisk == 1)
    {
        printf("\nMove Disk %d from %c-->%c\n", ndisk, source, dest);
        return;
    }
    tofh(ndisk-1, source, temp, dest);
    printf("\nMove Disk %d from %c-->%c\n", ndisk, source, dest);
    tofh(ndisk - 1, temp, source, dest);
}

