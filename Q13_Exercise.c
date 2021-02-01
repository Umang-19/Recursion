#include <stdio.h>

// int sum(int a[], int n)
// {
//     if (n == 0)
//         return 0;
//     return a[n-1] + sum(a, n - 1);
// }

int sum(int a[], int n)
{
    if (n == 1)
        return *a;
    // return a[0] + sum(a+1, n - 1);
    return *a + sum(a+1, n - 1);
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Values : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", sum(a, n));
    return 0;
}