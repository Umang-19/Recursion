// No. is divisible by 11 if
// (sum of digits at odd pos - sum of digits at even pos) = 0 or div by 11

#include <stdio.h>

int checkdivby11(int n)
{
    if (n == 11 || n == 0)
        return 1;

    if (n < 11)
        return 0;

    int diff, s1 = 0, s2 = 0;
    while (n)
    {
        s1 = n % 10;
        n = n / 10;
        s2 = n % 10;
        n = n / 10;
    }
    diff = (s1 > s2) ? (s1 - s2) : (s2 - s1);
    return checkdivby11(diff);
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (checkdivby11(n))
        printf("It is divisible by 11 !");
    else
        printf("It is not divisible by 11 !");
    return 0;
}
