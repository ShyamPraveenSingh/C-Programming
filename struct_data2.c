#include <stdio.h>
struct new
{
    int n;
    char name[20];
    float new;
};


int main()
{
    struct new a;
    scanf("%d",&a.n);
    scanf("%s",&a.name);
    scanf("%f",&a.new);
    printf("\nNumber: %d", a.n);
    printf("\nName: %s", a.name);
    printf("\nNew: %f\n", a.new);

    return 0;
}
