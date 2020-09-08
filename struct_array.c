#include <stdio.h>

struct student
{
    int no;
    char name[20];
    int marks;
    /* data */
};

int main()
{
    struct student a[3];
    for (int i = 0; i<3; i++){
        printf("\nEnter the %d student details: ", i+1);
        scanf("%d %s %d", &a[i].no, a[i].name, &a[i].marks);
    }
    for(int i = 0; i<3; i++){
        printf("\nThe %d student details are: ",i+1);
        printf("\nRoll No.: %d\t Name: %s\t Marks: %d\n",a[i].no, a[i].name, a[i].marks);
    }

    return 0;
}