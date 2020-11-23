#include <stdio.h>
struct  new
{
    int a;
    char c[20];
    float p;
};

int main()
{
    struct new e = {12, "shyam", 5443.321};
    printf("\nDetails: ");
    printf("\nNumber: %d", e.a);
    printf("\nCharacter: %s", e.c);
    printf("\nFloat: %f", e.p);
    printf("\nNumber: %d\n", e.a);

    return 0;
}
