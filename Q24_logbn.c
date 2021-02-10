#include <stdio.h>

int calculatelog(int n, int b)
{
    if (n <= 1)
        return 0;

    return (1 + calculatelog(n / b,b));
}

int main()
{
    int n, b;
    printf("Enter number n & base b : ");
    scanf("%d %d", &n, &b);
    printf("log %d base %d  is : %d", n, b, calculatelog(n, b));
    return 0;
}