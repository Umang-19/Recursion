#include <stdio.h>

int fastpower(int a, int b)
{
    if (b == 0)
        return 1;

    static int ans = 1;
    if (b & 1 != 0)
        ans = ans * a;
    fastpower(a * a, b >> 1);
    return ans;
}

int main()
{
    printf("%d", fastpower(5, 4));
    return 0;
}