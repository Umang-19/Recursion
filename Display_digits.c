#include <stdio.h>

void display1(int n)
{
    if (n == 0)
        return;

    display1(n / 10);
    printf("%d\n", n % 10);
}

void display2(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n % 10);
    display2(n / 10);
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Digits of n : \n");
    display1(n);

    printf("\nReversed Digits of n : \n");
    display2(n);
    return 0;
}
