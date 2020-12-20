//Program to check nesting of paranthesis using stacks
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20
int top = -1;
int stack[MAX];
void push(char);
char pop();
int match(char a, char b);

main()
{
    char exp[MAX];
    int valid;
    printf("\nEnter an algebraic expresssion: ");
    gets(exp);
    valid = check(exp);
    if(valid == 1)
        printf("\nValid expression.");
    else
        printf("\nInvalid expression.");
}

int check(char exp[])
{
    int i;
    char temp;
    for(i = 0; i<strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[' ||)
            push(exp[i]);

        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']' ||)
            if(top==-1)     //stack empty
            {
                printf("\nRight paranthesis are more than left\n");
                return 0;
            }
            else
            {
                temp = pop();
                if(!match(temp, exp[i]))
                {
                    printf("\nMismatched parantheses are: ");
                    printf("\n%c and %c", temp, exp[1]);
                    return 0;
                }
            }
    }
    if(top==-1)     //stack empty
    {
        printf("\nBalanced Parantheses\n");
        return 0;
    }
    else
    {
        printf("\nLeft parantheses more than right ones\n");
        return 0;
    }
}