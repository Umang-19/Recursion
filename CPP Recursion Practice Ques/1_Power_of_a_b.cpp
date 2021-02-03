//Power of n

#include <iostream>
using namespace std;

/* O(n)
int powerofn(int n, int p)
{
    if (p == 0)
        return 1;
    else
        return n * (powerofn(n, p - 1));
}
*/


// O(logn)
int powerofn(int n , int p)
{
    if(p == 0)
        return 1;
    
    static int res = 1;
    if(p & 1 != 0)
    res = res * n;
    powerofn(n * n , p>>1);
    return res;
}
int main()
{
    int n, p;
    cin >> n >>p;
    cout << powerofn(n, p);
    return 0;
}