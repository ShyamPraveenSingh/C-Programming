void display (int n)
{
    if(n == 0)
        return;
    printf("\n%d ",n);
    display(n-1);
}

void display2 (int n)
{
    if (n == 0)
        return;
    display2(n-1);
    printf("\n%d ", n);
}   