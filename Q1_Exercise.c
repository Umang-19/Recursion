#include <stdio.h>

int func1(int a, int b)
{
    if (a > b)
        return 0;
    return b + func1(a, b - 1);
}

int func2(int a, int b)
{
    if (a > b)
        return 0;
    return a + func1(a + 1, b);
}

int main()
{
    printf("%d %d", func1(3, 8), func2(3, 8));
    return 0;
}