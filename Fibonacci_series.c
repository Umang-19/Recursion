#include <stdio.h>

int fib(int n)
{
    if (n == 1)
        return 0;

    if (n == 2 || n == 3)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("\n%d Term of Fibonacci Series is : %d ", n, fib(n));
    return 0;
}
