#include <iostream>
using namespace std;

void gensubstring(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = str[0];
    gensubstring(str.substr(1), ans);
    gensubstring(str.substr(1), ans + c);
}

int main()
{
    gensubstring("ABC", "");
    return 0;
}