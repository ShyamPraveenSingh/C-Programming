#include <stdio.h>

//initialization of the structure
struct new
{
    int a, b;
};

int main()
{
    struct new e;
    printf("\n Size: %d", sizeof(e));
    printf("\n Size of: %d", sizeof(struct new));

    return 0;
}