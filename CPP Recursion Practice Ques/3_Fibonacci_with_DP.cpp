//Print nth fibonacci number

#include <iostream>
using namespace std;

/* Without DP
int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2 || n == 3)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
*/

int dp[100] = {0};

int fib(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;

    if (dp[n] != 0)
        return dp[n];
    
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];

}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}