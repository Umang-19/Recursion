#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(int low, int high, string s)
{
    if (low >= high)
        return true;
    if (s[low] == s[high])
        return checkpalindrome(low + 1, high - 1, s);
    else
        return false;
}

int main()
{
    string a = "ababa";
    string b = "aba";
    string c = "abbaa";
    
    cout << checkpalindrome(0, a.length() - 1, a) << endl;
    cout << checkpalindrome(0, b.length() - 1, b) << endl;
    cout << checkpalindrome(0, c.length() - 1, c) << endl;
    return 0;
}