#include <stdio.h>

int exponent(int n, int p)
{
    if (p == 0)
        return 1;

    return n * exponent(n, p - 1);
}

int main()
{
    int n, p;
    printf("Enter number & power : ");
    scanf("%d %d", &n, &p);
    printf("\n%d raised to power %d is : %d\n\n", n, p, exponent(n, p));
    return 0;
}
