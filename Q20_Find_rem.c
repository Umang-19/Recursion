#include <stdio.h>
#include <stdlib.h>


int findrem(int dividend , int divisor)
{
    if(dividend < divisor)
    return dividend;

    return findrem(dividend - divisor , divisor);
}
int main()
{
    int dividend, divisor;
    printf("Enter dividend : ");
    scanf("%d", &dividend);
    printf("Enter divisor : ");
    scanf("%d", &divisor);
    printf("\n\nRemainder : %d ", findrem(dividend, divisor));
    return 0;
}