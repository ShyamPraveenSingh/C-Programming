int summation(int n)
{
    if(n==0)
        return 1;
    return (n + summation(n-1));
}