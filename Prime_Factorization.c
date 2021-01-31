#include <stdio.h>

void primeFact(int n)
{
    int i = 2;

    if (n == 1)
    {
        printf("%d", n);
        return;
    }

    while (n % i != 0)
        i++;
    printf("%d * ", i);
    primeFact(n / i);
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("\nPrime Factorisation of %d is : ", n);
    primeFact(n);
    return 0;
}
