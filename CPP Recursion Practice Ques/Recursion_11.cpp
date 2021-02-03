//Move all x to the end

#include <iostream>
using namespace std;

string movex(string s)
{
    if (s.length() == 0)
        return "";
    char c = s[0];
    string ans = movex(s.substr(1));
    if (c == 'x')
        return (ans + c);
    else
        return (c + ans);
}

int main()
{
    string str = "xcbgxxhetxfgrx";
    cout << movex(str);
    return 0;
}