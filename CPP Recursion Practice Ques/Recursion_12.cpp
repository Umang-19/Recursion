// Generate all substrings

#include <iostream>
using namespace std;

void genSubstrng(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << " ";
        return;
    }
    char c = s[0];
    genSubstrng(s.substr(1), ans);
    genSubstrng(s.substr(1), ans + c);
}

int main()
{
    string str = "ABCD";
    genSubstrng(str, "");
    return 0;
}