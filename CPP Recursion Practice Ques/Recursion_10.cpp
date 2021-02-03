//Remove duplicates from a string

#include <iostream>
using namespace std;

string removeDup(string s)
{
    if (s.length() == 0)
        return "";

    char c = s[0];
    string ans = removeDup(s.substr(1));

    if (c == ans[0])
    {
        return ans;
    }
    else
        return (c + ans);
}

int main()
{
    string s = "aahhdggggbbbcc";
    cout << removeDup(s);
}