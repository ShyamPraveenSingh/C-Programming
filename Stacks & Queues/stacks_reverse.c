//Reverse of a string using stacks
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20
int top = -1;
char stack [MAX];
char pop();
void push(char);

main()
{
    char str[20];
    unsigned int  i;
    printf("\nEnter the string: ");
    gets(str);

    //Push characters in the string
    for (i = 0; i<strlen(str); i++){
        push(str[i]);
    }

    //Pop characters in the string
    for(i = 0; i<strlen(str); i++){
        str[i] = pop();
    }
    printf("\nReversed string is: ");
    puts(str);
}

void push(char item)
{
    if(top==(MAX-1))
    {
        printf("\nStacks Overflow");
        return;
    }
    stack[++top] = item;
}

char pop()
{
    if(top==-1)
    {
        printf("\nStacks Underflow");
        exit(1);
    }
    return stack[top--];
}

