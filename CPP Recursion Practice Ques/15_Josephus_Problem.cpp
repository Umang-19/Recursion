#include <bits/stdc++.h>
using namespace std;

int safepos(vector<int> &v, int idx, int n, int k)
{
    if (n == 1)
        return v[0];

    idx = (idx + k) % n;
    v.erase(v.begin() + idx);
    return safepos(v, idx, n - 1, k);
}

int main()
{
    int n , k;
    cout << "Enter no. of people & k : ";
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);

    cout << "Position of Josephus : " << safepos(v, 0, n, k - 1);
    return 0;
}