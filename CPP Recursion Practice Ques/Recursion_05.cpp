//Print increasing and decreasing numbers till n

#include <iostream>
using namespace std;

void inc(int n)
{
    if (n == 0)
        return;

    inc(n - 1);
    cout << n << " ";
}

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << " ";
        dec(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    inc(n);
    cout << endl;
    dec(n);
    return 0;
}