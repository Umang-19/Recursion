// Decimal to Binary , Octal & Hexadecimal

#include <stdio.h>

void convert(int n, int base)
{
    if (n == 0)
    {
        printf("%d ", n);
        return;
    }

    convert(n / base, base);
    if (n % base < 10)
        printf("%d ", n % base);
    else
        printf("%c", (n % base) - 10 + 'A');
}

int main()
{
    int n;
    printf("Enter decimal number : ");
    scanf("%d", &n);
    printf("\nBinary of %d is : ", n);
    convert(n, 2);

    printf("\nOctal of %d is : ", n);
    convert(n, 8);

    printf("\nHexadecimal of %d is : ", n);
    convert(n, 16);
    return 0;
}
