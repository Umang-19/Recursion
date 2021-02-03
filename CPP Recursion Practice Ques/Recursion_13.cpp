//Generate all substrings with ascii code

#include <iostream>
using namespace std;

void genSubstrng(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    genSubstrng(s.substr(1), ans);
    genSubstrng(s.substr(1), ans + c);
    string str1 = to_string((int(c)));
    genSubstrng(s.substr(1), ans + str1);
}

int main()
{
    string str = "AB";
    genSubstrng(str, "");
    return 0;
}