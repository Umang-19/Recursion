// No. is divisible by 9 if sum of digits is divisible by 9

#include <stdio.h>

int checkdivby9(int n)
{
    if (n == 9 || n == 0)
        return 1;

    if (n < 9)
        return 0;

    int sum = 0;
    while (n)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return checkdivby9(sum);
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (checkdivby9(n))
        printf("It is divisible by 9 !");
    else
        printf("It is not divisible by 9 !");
    return 0;
}
