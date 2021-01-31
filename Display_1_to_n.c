#include <stdio.h>

void display(int n)
{
    if (n == 0)
        return;

    display(n - 1);
    printf("%d\n", n); // Exceuted in unwinded phase
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    display(n);
    return 0;
}
