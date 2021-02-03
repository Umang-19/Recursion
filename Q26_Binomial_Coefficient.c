#include <stdio.h>

int bcoeff(int n, int k)
{
    if (n == k || k == 0)
        return 1;

    return bcoeff(n - 1, k) + bcoeff(n - 1, k - 1);
}

int main()
{
    printf("%d", bcoeff(5, 3));
    return 0;
}