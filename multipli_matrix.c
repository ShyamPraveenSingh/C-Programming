#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int a[ROW][COL], b[ROW][COL]; //c[ROW][COL];

    printf("\nEnter the elements of 1st array: \n");
    for (int i = 0; i<ROW; i++){
        for (int j = 0; j<COL; j++){
            printf("\nEnter the element \(%d,%d): ", i, j);
            scanf("%d",a[i][j]);
        }
    }

    printf("\nEnter the elements of 2nd array: \n"); 
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++)
        {
            printf("\nEnter the element \(%d,%d): ", i, j);
            scanf("%d", b[i][j]);
        }
    }
}