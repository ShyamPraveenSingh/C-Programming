#include <stdio.h>

int main()
{
    char name[20];
    for (int i = 0; i<5; i++){
        scanf("%c", &name[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
    return 0;
}
