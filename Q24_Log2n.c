#include <stdio.h>

int calculatelog(int n)
{
    if(n <= 1)
    return 0;

    return (1 + calculatelog(n>>1));
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("log base 2 %d : %d", n , calculatelog(n));
    return 0;
}