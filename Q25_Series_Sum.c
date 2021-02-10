#include <stdio.h>
#include <math.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

float iterseries(int n, int x)
{
    int flag = 1;
    float sum = 0;
    for (int i = 1; i <= (2 * n - 1); i = i + 2)
    {
        sum = sum + (pow(x, i) / fact(i)) * flag;
        flag = -flag;
    }
    return sum;
}

float recurseries(int n, int x, int i, int flag)
{
    
    if (i == 1)
        return x;

    return ((pow(x, i) / fact(i)) * flag) + recurseries(n, x, i - 2, -flag);
}

int main()
{
    int n, x;
    printf("Enter number n & x : ");
    scanf("%d %d", &n, &x);
    printf("By Iterative Approach : %.3f\n", iterseries(n, x));
    printf("By Recursive Approach : %.3f\n", recurseries(n, x, 2 * n - 1, -1));
    return 0;
}