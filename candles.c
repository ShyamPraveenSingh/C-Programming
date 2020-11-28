#include <stdio.h>
int main()
{
    int n, candles[1000], i, max=0, count=0;
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%d",&candles[i]);
    }

    for (i=0; i<n; i++){
        if (candles[i]>max){
            max = candles[i];
        }
    }
    printf("%d",max);
    for (i=0; i<n; i++){
        if(candles[i]==max){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
