#include <bits/stdc++.h>
using namespace std;

int uniquepaths(int n, int m)
{
    if (n == 1 || m == 1)
        return 1;

    return uniquepaths(n - 1, m) + uniquepaths(n, m - 1);
}

int main()
{
    cout << uniquepaths(3, 3);
    return 0;
}