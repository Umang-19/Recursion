#include <stdio.h>

void rev(char *str)
{
    if (*str == '\0')
        return;
    rev(str + 1);
    printf("%c", str[0]);
}

int main()
{
    char str[100];
    printf("Enter a line : ");
    gets(str);
    rev(str);
    return 0;
}