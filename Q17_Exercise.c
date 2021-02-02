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
    return divsum(n, i + 1, sum);
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Divisors : ");
    int sumofdiv = divsum(n, 1, 0);
    printf("\nSum : %d", sumofdiv);
    if (sumofdiv == n)
        printf("\nIt's a perfect number!");
    else
        printf("\nIt's not a perfect number!");
    return 0;
}