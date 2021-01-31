#include <stdio.h>

void towerofhanoi(int n, char src, char temp, char dest)
{
    if (n == 1)
    {
        printf("Move disk from %c to %c \n", src, dest);
        return;
    }
    towerofhanoi(n - 1, src, dest, temp);
    printf("Move disk from %c to %c \n", src, dest);
    towerofhanoi(n - 1, temp, src, dest);
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    towerofhanoi(n, 'A', 'B', 'C');
    return 0;
}