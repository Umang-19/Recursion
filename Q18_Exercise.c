#include <stdio.h>

void words(int n)
{
    switch (n)
    {
    case 0:
        printf("zero ");
        return;
    case 1:
        printf("one ");
        return;
    case 2:
        printf("two ");
        return;
    case 3:
        printf("three ");
        return;
    case 4:
        printf("four ");
        return;
    case 5:
        printf("five ");
        return;
    case 6:
        printf("six ");
        return;
    case 7:
        printf("seven ");
        return;
    case 8:
        printf("eight ");
        return;
    case 9:
        printf("nine ");
        return;
    }

    words(n / 10);
    words(n % 10);
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    words(n);
    return 0;
}