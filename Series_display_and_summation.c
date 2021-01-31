#include <stdio.h>

/* Will Not display integers , only prints the sum
int seriesSummation(int n)
{
    if (n == 1)
    {
        printf("%d + ",n);
        return 1;
    }

    return n + seriesSummation(n - 1);
    printf("%d + ",n); // Not executed in unwinding phase because function already returned
}
*/

int seriesSummation(int n)
{
    int sum ;

    if (n == 0)
        return 0;

    sum = n + seriesSummation(n - 1);
    printf("%d + ",n); 
    return sum;
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("%d", seriesSummation(n));
    return 0;
}
