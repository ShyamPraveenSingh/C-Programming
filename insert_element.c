//Insertion of elements on the given position

#include <stdio.h>
int main(){
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("\nEnter the %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements are: \n");
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);
        
    }
    printf("\n");
}