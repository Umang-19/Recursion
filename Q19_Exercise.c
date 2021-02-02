#include <stdio.h>

int reverse(int n)
{
    static int ans = 0;
    static int base_pos = 1;

    if(n == 0)
    return 0;

    reverse(n/10);
    ans = ans + (n % 10) * base_pos;
    base_pos = base_pos * 10;
    return ans;
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("%d", reverse(n));
    return 0;
}