#include<stdio.h>
#include<math.h>

int count(int a , int b)
{
    if(a > b)
    return 0;
    int flag = 0;
    for(int i = 2 ; i <= sqrt(a) ; i++)
    {
        if(a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    return 1 + count(a+1 , b);

    return count(a+1 , b);
}

int main()
{
    int a , b;
    printf("Enter a & b : ");
    scanf("%d %d", &a , &b);
    printf("Count of Prime no. between %d & %d : %d", a , b, count(a,b));
    return 0;
}