#include <stdio.h>

int sum(int n)
{
    if (n <= 9)
        return n;

    return (n % 10) + sum(n / 10);
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d", n, sum(n));
    return 0;
}
