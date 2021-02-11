#include <stdio.h>

int compute(int n)
{
    if (n == 1)
        return 1;

    return n + compute(n - 1);
}

int main()
{
    int n;
    printf("Enter n :\n");
    scanf("%d", &n);
    printf("No. of dots required : %d", compute(n));

    return 0;
}