#include <stdio.h>
#include <string.h>

int main()
{
    string a[] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    scanf("%d", &n);
    printf(((n > 9) ? a[0] : a[n]));
    return 0;
}
