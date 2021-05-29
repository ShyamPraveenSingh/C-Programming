#include <stdio.h>
int main()
{
    int r, c, m1[10][10], m2[10][10], res[10][10];

    printf("\nEnter the number of rows: ");
    scanf("%d",&r);
    printf("\nEnter the number of columns: ");
    scanf("%d", &c);

        //Debugging
        if(r!=c){
            printf("\nError! Rows and Columns should be equal.");
            
            printf("\nEnter the number of rows: ");
            scanf("%d", &r);
            printf("\nEnter the number of columns: ");
            scanf("%d", &c);
        }

    printf("\nEnter the elements of first array: ");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("\nEnter the element \(%d,%d): ", i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("\nEnter the elements of second array: ");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("\nEnter the element \(%d,%d): ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\nThe resultant matrix is: ");
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0;j<c; j++){
            printf("\n%d", res[i][j]);
        }
    }
    printf("\n");
    return 0;
}