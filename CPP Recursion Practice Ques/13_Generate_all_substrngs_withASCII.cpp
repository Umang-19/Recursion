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
    int code = c;
    string ros = s.substr(1);

    genSubstrng(ros, ans);
    genSubstrng(ros, ans + c);
    genSubstrng(ros, ans + to_string(code));
}

int main()
{
    string str = "ABC";
    genSubstrng(str, "");
    return 0;
}