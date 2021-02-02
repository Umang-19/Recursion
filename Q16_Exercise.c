#include <stdio.h>

int divsum(int n, int i, int sum)
{
    if (n == 0)
        return 0;

    if (i == n)
        return 0;

    if (n % i == 0)
    {
        printf("%d ", i);
        return i + divsum(n, i + 1, sum + i);
    }
    return divsum(n , i + 1, sum);
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Divisors : ");
    printf("\nSum of all divisors of %d is : %d", n, divsum(n, 1, 0));
    return 0;
}