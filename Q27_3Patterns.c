#include <stdio.h>

void pattern1(int n)
{
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }
    pattern1(n - 1);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    printf("\n");
    return;
}

void pattern2(int n)
{
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    pattern2(n - 1);
    return;
}


void pattern3(int n)
{
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }

    for (int i = n; i >= 1; i--)
        printf("%d ", i);
    printf("\n");
    pattern3(n - 1);
    return;
}


int main()
{
    printf("Pattern 1 :\n");
    pattern1(4);
    printf("\nPattern 2 :\n");
    pattern2(4);
    printf("\nPattern 3 :\n");
    pattern3(4);
    return 0;
}