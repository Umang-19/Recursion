#include <stdio.h>

int multiply(int a, int b)
{
    static int ans = 0; 
    if (a & 1 != 0)
        ans = ans + b;

    if (a == 1)
        return ans;

    return multiply(a >> 1, b << 1);
}

int main()
{
    printf("%d", multiply(24, 50));
    return 0;
}