#include <stdio.h>
#include <stdlib.h>


int findrem(int dividend , int divisor)
{
    static int quo = 0;
    if(dividend < divisor)
    return quo;

    quo++;
    return findrem(dividend - divisor , divisor);
}
int main()
{
    int dividend, divisor;
    printf("Enter dividend : ");
    scanf("%d", &dividend);
    printf("Enter divisor : ");
    scanf("%d", &divisor);
    printf("\n\nQuotient : %d ", findrem(dividend, divisor));
    return 0;
}